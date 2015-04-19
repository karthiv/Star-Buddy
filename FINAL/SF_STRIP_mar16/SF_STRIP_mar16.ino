  #include<Servo.h>

int index1=0;
int index2=0;
const int MaxChars=25;
char strValues[MaxChars+1];
int Array[25];
char WasteArray[25];
int count=1;
int i =0,j;  
//char str;
//----Servo config-----
Servo myServoX, myServoY,myServoL;
String servo1,servo2;
int xMin=40,xMax=120;
int yMin=60,yMax=100;
float sX=50,sY=1;
//float sX=84,sY=99;

float n1,n2;
char x[10],y[10];
int waste=0;
 float n,m;
char ch;
char one[4],two[4];
int oneflag=1;
String str;//="(123,789)";
int len=0;

void setup(){
  Serial.begin(9600);
  //pinMode(8,OUTPUT);
  myServoX.attach(9);  //attach servo X to pin 9
  myServoY.attach(10);  //attach servo X to pin 10
  myServoL.attach(8);
  myServoX.write(sX);   //defalut pos of Servo X
  myServoY.write(sY);   //default pos of Servo Y
  Serial.println("HERE"); 
 
  
}
void loop(){
  while(Serial.available()){
    
    delay(500);
    if(Serial.available()>0){ 
      
      char ch=Serial.read();
      str+=ch;
      if(ch==')'){
        calcCoordinates(str);
        str="";
        
      }
      
      //Serial.println(str);
     		

 /*   if((sizeof(one)<=3)&&(sizeof(one)<=3))
   
    Serial.println((n1));
 Serial.println((n2));*/
    
          
  
}}
delay(100);}
void calcCoordinates(String str){
  char ch;
  for(int j=0;j<str.length();j++){
    ch=str[j];
    Serial.println("please wait... caliberating..");
  if(oneflag){
				
	if(ch==','){
             one[i]=0;
	      oneflag=0;
	      i=0;
		}
                else if(ch!='('){
                                 one[i++]=ch;
                  }
        }
	else{
	
	    if(ch==')'){
                              two[i]=0;
	                       oneflag=1;
				i=0;
                                str="";
				
	}
           else if(ch!=' '){
               	two[i++]=ch;
           }
	}
		         
	}	//len++;
	
   n1=(atoi(one));
   n2=(atoi(two));
  Serial.println(atoi(one));
 Serial.println(atoi(two));

      
      float n1 =atoi(one);  
      float n2 =atoi(two);
      //int n3;
      Serial.println("the numbers are:");
      Serial.println(n1);
      Serial.println(n2);
      //converting to X and Y axis
      float xAx=(n1);
      float yAx=(n2);
      Serial.println("=====X and Y axis====");
      Serial.print(xAx);
      Serial.print(",");
      Serial.println(yAx);
      Serial.println("================");
      
      //Controlling Servo1
      
      n=xAx;
      m=yAx;
      //n=xAx;
      //m=yAx+.9;
      float i,j;
      int no=2;
      myServoL.attach(8);
      for(i=1;i<=n;i+=1){
         sX=sX+1; 
          
        myServoX.write(sX);
        //digital.write(8,HIGH);
        delay(10);
        if(i==n){
          
          break;  
        }
        
      }
      Serial.println(n);
      //myservo1.write(n);
      delay(100);
      for(j=1;j<=m;j+=1){
        sY=sY+1;
        //if(j>=(m/2)+2){
            //myServoL.attach(8);
            digitalWrite(8,HIGH);
             delay(100);
        //}
        myServoY.write(sY);
         
        delay(10);
        if(j==m){
//          myServoL.attach(8);
          digitalWrite(8,HIGH);
          delay(60000);
          myServoL.detach();
          
          digitalWrite(8, HIGH);
         
          delay(60000);
           break;
           
        }
      }
     delay(100);
    }/*
      Serial.println(m);
      //myservo2.write(m);
      
      //readString="";
      //myservo1.writeMicroseconds(n1);
      //myservo2.writeMicroseconds(n2);
     //readString="";
     callStop();
     delay(100);
     
//myservo1.write(109);
//cmyservo2.write(105);
  }
}

void callStop(){
  myServoX.detach();
  myServoY.detach();
}
*/
      
