
// initiliaze variables
int _delay = 0;

void setup() {
  // put your setup code here, to run once:
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
_delay = 0;


while(_delay < 30){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(_delay);  
  digitalWrite(LED_BUILTIN, LOW);
  delay(_delay);

  _delay++;
}

digitalWrite(LED_BUILTIN, HIGH);
delay(500);  
digitalWrite(LED_BUILTIN, LOW);
delay(150);

digitalWrite(LED_BUILTIN, HIGH);
delay(500);  
digitalWrite(LED_BUILTIN, LOW);
delay(150);

}
