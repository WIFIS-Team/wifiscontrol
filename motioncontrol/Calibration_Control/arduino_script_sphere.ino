//this is the code to be loaded onto the arduion that controls the integrating sphere

int led = 13;
int incomingByte = 0;
 
void setup() {
    pinMode(led, OUTPUT);
     
    //Setup Serial Port with baud rate of 9600
    Serial.begin(9600);
}
 
void loop() {
    if (Serial.available() > 0) {
        // read the incoming byte:
        incomingByte = Serial.read();
     
        if(incomingByte == 'H'){
            digitalWrite(led, HIGH);
            Serial.println("ON-");
        }else if(incomingByte == 'L'){
            digitalWrite(led, LOW);
            Serial.println("OFF");
        }
       
    }
}
