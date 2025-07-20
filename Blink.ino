int led_rosso = 3; 
int led_giallo = 13;
int tempo_acceso = 1000; 
int tempo_spento = 0; 

void setup() {
  // put your setup code here, to run once:
pinMode(led_rosso, OUTPUT); // da dove inziamo
pinMode(led_giallo, OUTPUT); // Led arduino incluso (arancione)
// ctrl + D seleziona piu caratteri 

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_giallo,HIGH); //accende il LED
delay(tempo_acceso);          // aspetta con il LED acceso 
digitalWrite(led_giallo, LOW); // spegne il LED 
delay(tempo_spento);           // aspetta il led spento 

digitalWrite(led_rosso,HIGH); //accende il LED
delay(tempo_acceso);          // aspetta con il LED acceso 
digitalWrite(led_rosso, LOW); // spegne il LED 
delay(tempo_spento);           // aspetta il led spento 

}
