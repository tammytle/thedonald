
bool isOff = true;

void setup() {
  Serial.begin(9600);
//  Serial.setTimeout(10);
  pinMode(5, OUTPUT);
}
void loop() {

  // if there's any serial data in the buffer, read a byte:
  if (Serial.available() > 0) {
   
    int inByte = Serial.read(); 
    Serial.println(inByte);  
     if (isOff) { 
      digitalWrite(5, 255);
//      delay(5000);  
      isOff = false;      
     } else {
      digitalWrite(5, 0);
//      delay(2000); 
      isOff = true;
     }
  }
}
   
