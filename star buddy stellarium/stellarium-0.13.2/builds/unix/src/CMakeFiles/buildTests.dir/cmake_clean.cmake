FILE(REMOVE_RECURSE
  "StelGuiLib_automoc.cpp"
  "stellarium_automoc.cpp"
  "testConversions_automoc.cpp"
  "testDates_automoc.cpp"
  "testDeltaT_automoc.cpp"
  "testStelFileMgr_automoc.cpp"
  "testStelJsonParser_automoc.cpp"
  "testStelSphereGeometry_automoc.cpp"
  "testStelVertexArray_automoc.cpp"
  "CMakeFiles/buildTests"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/buildTests.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
