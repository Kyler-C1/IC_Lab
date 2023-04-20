#define joyX A0
#define joyY A1

double xValue;
double yValue;

void setup() {
    Serial.begin(9600);
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(9, INPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    // if (digitalRead(9) == HIGH)
    // {
    //     digitalWrite(13, HIGH);
    //     delay(250);
    // }
    // else 
    // {
    //     digitalWrite(13, LOW);
    //     delay(250);
    // }

    xValue = analogRead(joyX);
    yValue = analogRead(joyY);

    //print the values with to plot or view
    Serial.print(xValue);

    Serial.print("\t");
    Serial.println(yValue);

    analogWrite(5, xValue);
    analogWrite(6, yValue);
}

