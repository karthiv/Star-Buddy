#!/usr/bin/perl

#
# Tool for generate catalog of exoplanets
#
# Copyright (C) 2013, 2014 Alexander Wolf
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# 

use DBI();
use LWP::UserAgent();
use Text::CSV;

#
# Stage 1: connect to 'The Extrasolar Planets Encyclopaedia' at exoplanet.eu, fetch CSV data and store to MySQL
# Stage 2: read MySQL catalog of exoplanets and store it to JSON
#

$URL	= "http://exoplanet.eu/catalog/csv/";
$CSV	= "./exoplanets.csv";
$JSON	= "./exoplanets.json";
$HCSV	= "./habitable.csv";
$CNT	= "./count";

$CATALOG_FORMAT_VERSION = 1;

$dbname	= "exoplanets";
$dbhost	= "localhost";
$dbuser	= "exoplanet";
$dbpass	= "exoplanet";

$UA = LWP::UserAgent->new(keep_alive => 1, timeout => 360);
$UA->agent("Mozilla/5.0 (Stellarium Exoplanets Catalog Updater 2.7; http://stellarium.org/)");
$request = HTTP::Request->new('GET', $URL);
$responce = $UA->request($request);

if ($responce->is_success) {
	open(OUT, ">$CSV");
	$data = $responce->content;
	binmode OUT;
	print OUT $data;
	close OUT;
} else {
	print "Can't connect to URL: $URL\n";
#	exit;
}

$dsn = "DBI:mysql:database=$dbname;host=$dbhost";

$csvdata = Text::CSV->new();

open (HCSV, "<$HCSV");
@habitable = <HCSV>;
close HCSV;

%hs = ();
%hp = ();
for ($i=1;$i<scalar(@habitable);$i++) {
	$status  = $csvdata->parse($habitable[$i]);
	@hdata = $csvdata->fields();
	%hs = (%hs, $hdata[1], 1);
	%hp = (%hp, $hdata[1]." ".$hdata[2], $habitable[$i]);
}

open (CSV, "<$CSV");
@catalog = <CSV>;
close CSV;

$dbh = DBI->connect($dsn, $dbuser, $dbpass, {'RaiseError' => 1});
$sth = $dbh->do(q{SET NAMES utf8});
$sth = $dbh->do(q{TRUNCATE stars});
$sth = $dbh->prepare(q{SELECT COUNT(pid) FROM planets});
$sth->execute();
@ipcnt = $sth->fetchrow_array();
$initCnt = @ipcnt[0];

$sth = $dbh->do(q{TRUNCATE planets});

# parse first line for guessing format of catalog
$currformat = $catalog[0];
$currformat =~ s/\#//gi;
$currformat =~ s/\s//gi;
$status  = $csvdata->parse($currformat);
@fdata = ();
@fdata = $csvdata->fields();
%column = ();
for ($i=0;$i<scalar(@fdata);$i++) {
	if ($fdata[$i] eq "name") {		$column{'pname'} = $i;		}
	if ($fdata[$i] eq "mass") {		$column{'pmass'} = $i;		}
	if ($fdata[$i] eq "radius") {		$column{'pradius'} = $i;	}
	if ($fdata[$i] eq "orbital_period") {	$column{'pperiod'} = $i;	}
	if ($fdata[$i] eq "semi_major_axis") {	$column{'paxis'} = $i;		}
	if ($fdata[$i] eq "eccentricity") {	$column{'pecc'} = $i;		}
	if ($fdata[$i] eq "inclination") {	$column{'pincl'} = $i;		}
	if ($fdata[$i] eq "angular_distance") {	$column{'angdist'} = $i;	}
	if ($fdata[$i] eq "discovered") {	$column{'discovered'} = $i;	}
	if ($fdata[$i] eq "star_name") {	$column{'starname'} = $i;	}
	if ($fdata[$i] eq "ra") {		$column{'sra'} = $i;		}
	if ($fdata[$i] eq "dec") {		$column{'sdec'} = $i;		}
	if ($fdata[$i] eq "mag_v") {		$column{'svmag'} = $i;		}
	if ($fdata[$i] eq "star_distance") {	$column{'sdist'} = $i;		}
	if ($fdata[$i] eq "star_metallicity") {	$column{'smetal'} = $i;		}
	if ($fdata[$i] eq "star_mass") {	$column{'smass'} = $i;		}
	if ($fdata[$i] eq "star_radius") {	$column{'sradius'} = $i;	}
	if ($fdata[$i] eq "star_sp_type") {	$column{'sstype'} = $i;		}
	if ($fdata[$i] eq "star_teff") {	$column{'sefftemp'} = $i;	}
}

# parse other all lines for get data
for ($i=1;$i<scalar(@catalog);$i++) {
	$currdata = $catalog[$i];
	$currdata =~ s/nan//gi;
	
	$status  = $csvdata->parse($currdata);
	@psdata = ();
	@psdata = $csvdata->fields();

	@cfname = ();
	@cfname = split(" ",$psdata[$column{'pname'}]);
	
	if (scalar(@cfname)==4) {
		$csname = $cfname[0]." ".$cfname[1]." ".$cfname[2];
		$pname = $cfname[3];
	} elsif (scalar(@cfname)==3) {
		$csname = $cfname[0]." ".$cfname[1];
		$pname = $cfname[2];
	} else {
		$csname = $cfname[0];
		$pname = $cfname[1];
	}
	
	$pmass		= $psdata[$column{'pmass'}];		# planet mass
	$pradius	= $psdata[$column{'pradius'}];		# planet radius
	$pperiod	= $psdata[$column{'pperiod'}];		# planet period
	$paxis		= $psdata[$column{'paxis'}];		# planet axis
	$pecc		= $psdata[$column{'pecc'}];		# planet eccentricity
	$pincl		= $psdata[$column{'pincl'}];		# planet inclination
	$angdist	= $psdata[$column{'angdist'}];		# planet angular distance
	$discovered	= $psdata[$column{'discovered'}];	# planet discovered
	$starname	= $psdata[$column{'starname'}];		# star name
	$sRA		= $psdata[$column{'sra'}];		# star RA
	$sDec		= $psdata[$column{'sdec'}];		# star dec
	$sVmag		= $psdata[$column{'svmag'}];		# star v magnitude
	$sdist		= $psdata[$column{'sdist'}];		# star distance
	$smetal		= $psdata[$column{'smetal'}];		# star metallicity
	$smass		= $psdata[$column{'smass'}];		# star mass
	$sradius	= $psdata[$column{'sradius'}];		# star radius
	$sstype		= $psdata[$column{'sstype'}];		# star spectral type
	$sefftemp	= $psdata[$column{'sefftemp'}];		# star effective temperature
	
	$part = $sRA/15;
	$hour = int($part);
	$mint = int(($part-$hour)*60);
	$sect = int((($part-$hour)*3600-60*$mint)*10)/10;

	$deg = int($sDec);
	$min = int(($sDec-$deg)*60);
	$sec = int((($sDec-$deg)*3600-60*$min)*10)/10;
	
	# fixed bug for Kepler-68
	if ($starname =~ m/kepler-68/gi) {
		$hour = 19;
	}
	# fixed bug for omi CrB
	if ($starname =~ m/omi\s+CrB/gi) {
		$hour = 15; $mint = 20; $sect = 8.4;
		$deg = 29; $min = 36; $sec = 57.9;
	}
	
	$outRA = $hour."h".abs($mint)."m".abs($sect)."s";
	$outDE = $deg."d".abs($min)."m".abs($sec)."s";
	# fixed bug for 24 Sex
	if ($starname =~ m/24\s+Sex/gi) {
		$outDE = "-".$outDE;
	}

	
	$sname = $starname;

	$sname =~ s/^alpha/α/gi;
	$sname =~ s/^alf/α/gi;
	$sname =~ s/^beta/β/gi;
	$sname =~ s/^gamma/γ/gi;
	$sname =~ s/^delta/δ/gi;
	$sname =~ s/^epsilon/ε/gi;
	$sname =~ s/^eps/ε/gi;
	$sname =~ s/^zeta/ζ/gi;
	$sname =~ s/^theta/θ/gi;
	$sname =~ s/^eta/η/gi;
	$sname =~ s/^iota/ι/gi;
	$sname =~ s/^kappa/κ/gi;
	$sname =~ s/^lambda/λ/gi;
	$sname =~ s/^mu/μ/gi;
	$sname =~ s/^nu/ν/gi;
	$sname =~ s/^xi/ξ/gi;
	$sname =~ s/^ksi/ξ/gi;
	$sname =~ s/^(omicron|omi)/ο/gi;
	$sname =~ s/^pi/π/gi;
	$sname =~ s/^rho/ρ/gi;
	$sname =~ s/^(sigma|sig)/σ/gi;
	$sname =~ s/^tau/τ/gi;
	$sname =~ s/^upsilon/υ/gi;
	$sname =~ s/^ups/υ/gi;
	$sname =~ s/^phi/φ/gi;
	$sname =~ s/^chi/χ/gi;
	$sname =~ s/^psi/ψ/gi;
	$sname =~ s/^omega/ω/gi;
	$sname =~ s/^ome/ω/gi;
	
	if (($sRA != 0.0) && ($sDec != 0.0) && ($sname ne '')) {
		# check star
		$sth = $dbh->prepare(q{SELECT sid,sname FROM stars WHERE ra_coord=? AND dec_coord=?});
		$sth->execute($outRA, $outDE);
		@starDATA = $sth->fetchrow_array();
		# get star ID
		if (scalar(@starDATA)!=0) {
			$starID   = @starDATA[0];
			$starName = @starDATA[1];
		} else {
			$HPflag = 0;
			if (exists($hs{$sname})) {
				$HPflag = 1;
			}
			# insert star data
			$sth = $dbh->do(q{INSERT INTO stars (ra_coord,dec_coord,sname,distance,stype,smass,smetal,vmag,sradius,sefftemp,has_habit_planet) VALUES (?,?,?,?,?,?,?,?,?,?,?)}, undef, $outRA, $outDE, $sname, $sdist, $sstype, $smass, $smetal, $sVmag, $sradius, $sefftemp, $HPflag);
			$sth = $dbh->prepare(q{SELECT sid,sname FROM stars ORDER BY sid DESC LIMIT 0,1});
			$sth->execute();
			@starDATA = $sth->fetchrow_array();
			$starID   = @starDATA[0];
			$starName = @starDATA[1];
		}
		
		$hclass = '';
		$hptype = '';
		$mstemp = -1;
		$eqtemp = -1;
		$esi    = -1;
		
		$key = $starName." ".$pname;
		if (exists($hp{$key})) {
			$status  = $csvdata->parse($hp{$key});
			($hsn,$hsname,$hpname,$hptype,$eqtemp,$esi) = $csvdata->fields();
		}
		
		# insert planet data
		$sth = $dbh->do(q{INSERT INTO planets (sid,pname,pmass,pradius,pperiod,psemiaxis,pecc,pinc,padistance,discovered,hptype,eqtemp,esi) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?)}, undef, $starID, $pname, $pmass, $pradius, $pperiod, $paxis, $pecc, $pincl, $angdist, $discovered, $hptype, $eqtemp, $esi);
	}
#	else
#	{
#		print $sname.": ".$sRA.":".$sDec." [".$currdata."]\n";
#	}
}

open (JSON, ">$JSON");
print JSON "{\n";
print JSON "\t\"version\": \"".$CATALOG_FORMAT_VERSION."\",\n";
print JSON "\t\"shortName\": \"A catalogue of stars with exoplanets\",\n";
print JSON "\t\"stars\":\n";
print JSON "\t{\n";

$sth = $dbh->prepare(q{SELECT COUNT(sid) FROM stars});
$sth->execute();
@scountraw = $sth->fetchrow_array();
$scount = @scountraw[0];
$i = 0;

$sth = $dbh->prepare(q{SELECT * FROM stars});
$sth->execute();
while (@stars = $sth->fetchrow_array()) {
	$sid		= $stars[0];
	$RA		= $stars[1];
	$DE		= $stars[2];
	$sname		= $stars[3];
	$sdist		= $stars[4];
	$sstype		= $stars[5];
	$smass		= $stars[6];
	$smetal		= $stars[7];
	$sVmag		= $stars[8];
	$sradius	= $stars[9];
	$sefftemp	= $stars[10];
	$hasHabitPl	= $stars[11];
	
	if ($sname eq "Kapteyn's") {
		$sname .= " Star"; # cosmetic fix for translation support
	}
	
	$out  = "\t\t\"".$sname."\":\n";
	$out .= "\t\t{\n";
	$out .= "\t\t\t\"exoplanets\":\n";
	$out .= "\t\t\t[\n";
	
	$stp = $dbh->prepare(q{SELECT COUNT(pid) FROM planets WHERE sid=?});
	$stp->execute($sid);
	@pcountraw = $stp->fetchrow_array();
	$pcount = @pcountraw[0];
	$j = 0;
	
	$stp = $dbh->prepare(q{SELECT * FROM planets WHERE sid=?});
	$stp->execute($sid);
	while(@planets = $stp->fetchrow_array()) {
		$pid		= $planets[0];
		$pname		= $planets[2];
		$pmass		= $planets[3];
		$pradius	= $planets[4];
		$pperiod	= $planets[5];
		$psemiax	= $planets[6];
		$pecc		= $planets[7];
		$pinc		= $planets[8];
		$angdist	= $planets[9];
		$discovered	= $planets[10];
		$hpltype	= $planets[11];
		$eqktemp	= $planets[12];
		$esindex	= $planets[13];
	
		$out .= "\t\t\t{\n";
		if ($pmass ne '') {
			$out .= "\t\t\t\t\"mass\": ".$pmass.",\n";
		}
		if ($pradius ne '') {
			$out .= "\t\t\t\t\"radius\": ".$pradius.",\n";
		}
		if ($pperiod ne '') {
			$out .= "\t\t\t\t\"period\": ".$pperiod.",\n";
		}
		if ($psemiax ne '') {
			$out .= "\t\t\t\t\"semiAxis\": ".$psemiax.",\n";
		}
		if ($pecc ne '') {
			$out .= "\t\t\t\t\"eccentricity\": ".$pecc.",\n";
		}
		if ($pinc ne '') {
			$out .= "\t\t\t\t\"inclination\": ".$pinc.",\n";
		}
		if ($angdist ne '') {
			$out .= "\t\t\t\t\"angleDistance\": ".$angdist.",\n";
		}
		if ($discovered ne '') {
			$out .= "\t\t\t\t\"discovered\": ".$discovered.",\n";
		}
		if ($hpltype ne '') {
			$out .= "\t\t\t\t\"pclass\": \"".$hpltype."\",\n";
		}
		if ($eqktemp > 0) {
			$out .= "\t\t\t\t\"EqTemp\": ".$eqktemp.",\n";
		}
		if ($esindex > 0) {
			$out .= "\t\t\t\t\"ESI\": ".$esindex.",\n";
		}
		if ($pname eq '') {
			$pname = "a";
		}
		$out .= "\t\t\t\t\"planetName\": \"".$pname."\"\n";
		$out .= "\t\t\t}";
		$j += 1;
		if ($j<$pcount) {
			$out .= ",";
		}
		$out .= "\n";
	}
	$out .= "\t\t\t],\n";

	if ($sdist ne '') {
		$out .= "\t\t\t\"distance\": ".$sdist.",\n";
	}
	if ($sstype ne '') {
		$out .= "\t\t\t\"stype\": \"".$sstype."\",\n";
	}
	if ($smass ne '') {
		$out .= "\t\t\t\"smass\": ".$smass.",\n";
	}
	if ($smetal ne '') {
		$out .= "\t\t\t\"smetal\": ".$smetal.",\n";
	}
	if ($sVmag ne '') {
		$out .= "\t\t\t\"Vmag\": ".$sVmag.",\n";
	}
	if ($sradius ne '') {
		$out .= "\t\t\t\"sradius\": ".$sradius.",\n";
	}
	if ($sefftemp ne '') {
		$out .= "\t\t\t\"effectiveTemp\": ".$sefftemp.",\n";
	}
	if ($hasHabitPl > 0) {
		$out .= "\t\t\t\"hasHP\": true,\n";
	}
	$out .= "\t\t\t\"RA\": \"".$RA."\",\n";
	$out .= "\t\t\t\"DE\": \"".$DE."\"\n";
	$out .= "\t\t}";
	
	$i += 1;
	if ($i<$scount) {
		$out .= ",";
	}

	print JSON $out."\n";

}

print JSON "\t}\n}\n";
close JSON;

$sth = $dbh->prepare(q{SELECT COUNT(pid) FROM planets});
$sth->execute();
@ipcnt = $sth->fetchrow_array();
$lastCnt = @ipcnt[0];
open (COUNTD, ">$CNT");
print COUNTD $lastCnt-$initCnt;
close COUNTD;

# LOG
print "Planets in DB (Old/New): ".$initCnt."/".$lastCnt."\n";
