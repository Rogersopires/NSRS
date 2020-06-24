//A sketch to demonstrate the tone() function

//Specify digital pin on the Arduino that the positive lead of piezo buzzer is attached.
int piezoPin = 3;

void setup() {

}//close setup

void loop() {

  /*Tone needs 2 arguments, but can take three
    1) Pin#
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
    3) Duration - how long teh tone plays
  */
 for (int i = 1; i <= 40; i++) {
    tone(piezoPin, i*25, 300);
  delay(300);
  } 
  for (int i = 40; i >= 0; i--) {
    tone(piezoPin, i*25, 300);
  delay(300);
  } 
  
  //tone(piezoPin, 1000, 500);
  //delay(1000);

}
