const int mybutton = 14;

void setup(){
    Serial.begin(9600);
    ini di program f/button
    pinMode(mybutton, INPUT);
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
