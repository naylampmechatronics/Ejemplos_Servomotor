/****************************************************************************************
 Múltiple  servo
 
  Programa para controlar varios servomotores, cada servo se manipula con un potenciómetro.

 Conexiones:
  --------------------------
  Servo/Pot.  -> Arduino
  --------------------------
  GND(todosServos)->   GND  
  VCC(todosServos)->   6V (Fuente externa) 
  DATA1 (Servo1)  ->   D3 
  DATA2 (Servo2)  ->   D4 
  DATA3 (Servo3)  ->   D5 
  DATA4 (Servo4)  ->   D6 
  DATA5 (Servo5)  ->   D7  
  Pin1 (todos Pot)->   5V  
  Pin3 (todos Pot)->   GND  
  Pin2_1 (Pot1)   ->   A1  
  Pin2_2 (Pot2)   ->   A2
  Pin2_3 (Pot3)   ->   A3
  Pin2_4 (Pot4)   ->   A4
  Pin2_5 (Pot5)   ->   A5 
  --------------------------
  *Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines
 
 Ejemplo desarrollado por Naylamp Mechatronics bajo licencia MIT (puede copiar, modificar, integrar o redistribuir)
 
 Última modificación el 26/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/33_Tutorial-uso-de-servomotores-con-arduino-.html
   -https://github.com/naylampmechatronics/Ejemplos_Servomotor

**************************************************************************************************/
#include <Servo.h> 

//definición de pines
const int PinServo1 = 3;
const int PinServo2 = 4;
const int PinServo3 = 5;
const int PinServo4 = 6;
const int PinServo5 = 7;
const int PinPot1 = A0;
const int PinPot2 = A1;
const int PinPot3 = A2;
const int PinPot4 = A3;
const int PinPot5 = A4;


Servo servo1;  //creamos un objeto servo 
Servo servo2;  //creamos un objeto servo 
Servo servo3;  //creamos un objeto servo 
Servo servo4;  //creamos un objeto servo 
Servo servo5;  //creamos un objeto servo 

void setup() 
{ 
  servo1.attach(PinServo1);  // asignamos el pin al servo.
  servo2.attach(PinServo2);  // asignamos el pin al servo.
  servo3.attach(PinServo3);  // asignamos el pin al servo.
  servo4.attach(PinServo4);  // asignamos el pin al servo.
  servo5.attach(PinServo5);  // asignamos el pin al servo.
   Serial.begin(9600);
} 
 
void loop() 
{ 
  int angulo1 = map(analogRead(PinPot1), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo2 = map(analogRead(PinPot2), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo3 = map(analogRead(PinPot3), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo4 = map(analogRead(PinPot4), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo5 = map(analogRead(PinPot5), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180  
  servo1.write(angulo1);  // enviamos el valor escalado al servo.
  servo2.write(angulo2);  // enviamos el valor escalado al servo.
  servo3.write(angulo3);  // enviamos el valor escalado al servo.
  servo4.write(angulo4);  // enviamos el valor escalado al servo.
  servo5.write(angulo5);  // enviamos el valor escalado al servo.
  //----Enviamos los ángulos serialmente--------------
  Serial.print("Angulos  1: ");
  Serial.print(angulo1);
  Serial.print("  2: ");
  Serial.print(angulo2);
  Serial.print("  3: ");
  Serial.print(angulo3);
  Serial.print("  4: ");
  Serial.print(angulo4);
  Serial.print("  5: ");
  Serial.println(angulo5);
  delay(10);            
}
