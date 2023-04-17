const int myled = 13;
const int mybutton = 14;

void setup(){
    Serial.begin(9600);
    pinMode(mybutton, INPUT);
    pinMode(myled, OUTPUT);
}


void loop(){
    int buttonState = digitalRead(mybutton);
    
    if (buttonState == HIGH)
    {
        digitalWrite(myled, HIGH);
    }
    else{
        digitalWrite(myled, LOW);
    }
}