const int led_rosso = 5; 
const int led_azzurro = 3; 
const int led_giallo = 6; 
const int pausa = 1000;

void setup() {

pinMode(led_rosso, OUTPUT);
pinMode(led_giallo, OUTPUT);
pinMode(led_azzurro, OUTPUT);

}

void loop() {

    digitalWrite(led_rosso, HIGH);
    digitalWrite(led_giallo, LOW);
    digitalWrite(led_azzurro, LOW);
    delay(pausa);  

    digitalWrite(led_rosso, LOW);
    digitalWrite(led_giallo, HIGH);
    digitalWrite(led_azzurro, LOW);
    delay(pausa);  

    digitalWrite(led_rosso, LOW);
    digitalWrite(led_giallo, LOW);
    digitalWrite(led_azzurro, HIGH);
    delay(pausa);    
}