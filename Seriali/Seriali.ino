
int ro=PF_1,ve=PF_3,az=PF_2,le2;
String le;


void setup(){
  Serial.begin(9600);
  pinMode(ro,OUTPUT);
  pinMode(ve,OUTPUT);
  pinMode(az,OUTPUT);
}


void loop(){
  if(Serial.available()>0){
    le=Serial.read();
    le2=le.toInt();
    switch(le2){
      case 49:
        pinMode(ro,HIGH);
        delay(500);
        pinMode(ro,LOW); 
      case 50:
        pinMode(ve,HIGH);
        delay(500);
        pinMode(ve,LOW);    
      case 51:
        pinMode(az,HIGH);
        delay(500);
        pinMode(az,LOW);  
    }
    //Serial.print(le);
    //Serial.print("-");
    Serial.println(le2);
  }
  delay(100);
}



