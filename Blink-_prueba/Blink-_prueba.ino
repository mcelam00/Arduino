
/*
 * La instruccion pinmode es la primera que vamos a ver
 * recibe 2 argumentso, el pin del que estamos hablando y lo segundo i va a ser una entrada o una salida (le digo el 13 va a ser una salida output)
 * cuando tenemos muchos led pues no sabemos si el baño era el 7 o el 20 entonces es mejor declaraa un entero que sea baño y le doy valor de 13 y luego lo meto en led builtin
 * Al pin 13 solamente, al estar en la placa conectado tambien se le puede llamar LED_BUILTIN
 * 
 */

//int banyo =13;








// the setup function runs once when you press reset or power the board solo se ejecuta una vez
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  //pinmode(banyo, OUTPUT);
}


/*
 * Digitalwrite el led del que estamos hablando y un estado, alto para encender el led
 * delay es una parada, entoncecs le hablamos en milisegundos, 1000 milisegundos es 1 segundo
 * digitalwrite del led 13 lo apaga, y espera otro segundo y vuelve arriba, 
 * 
 * 
 * 
 * 
 * 
 * 
 */
// the loop function runs over and over again forever, se repita continuamente en el tiempo, casi todo lo que programemmos sera una automatizacion
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
}


/**
 * 
 * HErramientas > seleccionamos placa arduino genuino 1 
 * la enchifamos y seleccionamos el puerto en el que está
 * primero hay que compular el codigo para no cargarnos la placa, entoces lo que hago es darle al tick
 * Ha dado compilado asi que perfecto para subirlo damos a la flecha al lado del tick
 * lo mismo lo conecto y ya funciona, eso es porque ya estaba guardado de antes y hasta no cargar uno nuevo no cambia
 * Cuando elegimos el puerto a los puertos de comunicacion les llama puertos COM y linux les llama ttyACM 
 * sudo chmod 666 /dev/ para darle permisos al puerto
 */
