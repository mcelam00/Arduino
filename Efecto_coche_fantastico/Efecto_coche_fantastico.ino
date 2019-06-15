
/*
 * Ponemos las resistencias en el medio, con montar 4 vale, fijarse que los led tienen polaridad y la patilla larga es el mos, entonces la patiilla corta el menos siemrep a ground, arriba
 * Para mandarle lucir la led, cuando yo pongo un estado alto en el led 13 significa que aparecen 5 voltios en el 13, entonces lo enchufamos y listo
 * 
 * readpin leer del pin si esta pulsandose un boton, con un if si se pulsa hace un coche fantastico
 * 
 */




void setup() {
  // put your setup code here, to run once:

 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);




}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW

   digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW

   digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW

   digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  

  
   digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW

   digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(12, LOW); 

  
  
}
