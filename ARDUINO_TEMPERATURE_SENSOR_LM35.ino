/*
 Developer : Towqir Ahmed Shaem
 Institute : Appplied Physics, Electronics and Communication Engineering, Chittagong University.
 Email : towqirahmedshaem@gmail.com
 */
int value;
int tempPin =A0;
void setup()
{
 pinMode(tempPin,INPUT);
 Serial.begin(9600);
}
void loop()
{
value = analogRead(tempPin);
float mv =(5.0 * 1000.0 * value ) / 1024;    // It is the equation to find the value in mV. Here 5 is our  given voltage.
float celcius = mv/10;                       // 10mV is equal to 1 degree Celcius
float farenhite  = (celcius*9)/5 + 32;
Serial.print("TEMPRATURE = ");
Serial.print(celcius);
Serial.print("*C    ");
Serial.print(farenhite );
Serial.print("*F");
Serial.println();
delay(1000);
}
