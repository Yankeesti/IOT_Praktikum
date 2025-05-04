// There are a few new programming features introduced in this lab.
const int RED_LED_PIN = 9;
const int GREEN_LED_PIN = 10;
const int BLUE_LED_PIN = 11;
// The lines above make it easy to move wire leads to one of the other PWM pins
// (3,5 or 6) by changing one value in the code.
int redIntensity = 0;
int greenIntensity = 0;
int blueIntensity = 0;
const int DISPLAY_TIME = 100;
// Another constant that would make varying the delay easy to adjust.
void setup() {
// No setup required but you still need it
}
void loop(){
 for (greenIntensity = 0; greenIntensity <= 255; greenIntensity+=5) {
 redIntensity = 255-greenIntensity;
 analogWrite(GREEN_LED_PIN, greenIntensity);
 analogWrite(RED_LED_PIN, redIntensity);
 delay(DISPLAY_TIME);
 }
 // The analogWrite functions above are simulating voltage changes for the LED
 // color changes. This will only work on the PWM pins.
 for (blueIntensity = 0; blueIntensity <= 255; blueIntensity+=5) {
 greenIntensity = 255-blueIntensity;
 analogWrite(BLUE_LED_PIN, blueIntensity);
 analogWrite(GREEN_LED_PIN, greenIntensity);
 delay(DISPLAY_TIME);
 }
 for (redIntensity = 0; redIntensity <= 255; redIntensity+=5) {
 blueIntensity = 255-redIntensity;
 analogWrite(RED_LED_PIN, redIntensity);
 analogWrite(BLUE_LED_PIN, blueIntensity);
 delay(DISPLAY_TIME);
 }
 }