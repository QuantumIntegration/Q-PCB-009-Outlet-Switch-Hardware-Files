const int outputPin = 13;

void setup(){ 
 Serial.begin(115200);
 pinMode(outputPin, OUTPUT);
}

void loop(){
 if(Serial.available()){
  byte readData = Serial.read();
  if(readData == '0'){
    digitalWrite(outputPin, LOW);
  }else if(readData == '1'){
    digitalWrite(outputPin, HIGH);
  }
 }
}