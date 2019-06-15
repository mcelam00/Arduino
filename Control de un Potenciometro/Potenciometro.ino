
/*
 * conexion de un potenciometro
 * Un extremo a 5 voltios, el otro a tierra y por el del medio es por el que nos da la salida el potenciometro
 * pin 13 estado alto significa que en ese pin aparecen 65 voltios y la luz luce
 * cuando este en 5 voltios , la variable que voy a leer y guardar cuando este en el 5 valdra 1023 y al llegar a l 0 valdra 0 
 * 
 * Concecto en 5 voltios una pata, la otra a gnd y la tercera a 
 * 
 * 
 */




int ValorLectura;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ValorLectura = analogRead(A1); //leo la entrada analogica A1 que es la salida del potenciometro

Serial.print("El valor leido es: ");
Serial.print("\t");
Serial.println(ValorLectura);
delay(500);




}
