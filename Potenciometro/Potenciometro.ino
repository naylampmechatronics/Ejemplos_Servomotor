/****************************************************************************************
 Potenciómetro
 
  Programa para controlar un servomotor con un Potenciómetro

 Conexiones:
  -----------------------
  Servo   -> Arduino
  -----------------------
  GND     ->   GND  
  VCC     ->   5V (*) 
  DATA    ->   D3   
  -----------------------
  Potenciómetro-> Arduino
  -----------------------
  Pin 1    ->   5V  
  Pin 2    ->   A0  
  Pin 3    ->   GND   
  ---------------
  * El VCC del servo solo conectar a los 5V del Arduino si es un motor de poca corriente como el SG90, para otros servos usar una fuente externa
  **Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines
 
 Programa basado en el ejemplo Knob de la librería Servo
 
 Última modificación el 25/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/33_Tutorial-uso-de-servomotores-con-arduino-.html
   -https://github.com/naylampmechatronics/Ejemplos_Servomotor

**************************************************************************************************/

#include <Servo.h> 
 
Servo myservo;  //creamos un objeto servo 

//definición de pines
const int PinServo = 3;
const int PinPot = A0;

void setup() 
{ 
  myservo.attach(PinServo);  // asignamos el pin 9 al servo.
  // inicializar la comunicación serial(para visualizar en el monitor Serial):
  Serial.begin(9600);
} 
 
void loop() 
{ 
  int adc = analogRead(PinPot);  // realizamos la lectura del potenciometro
  int angulo = map(adc, 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180 
  myservo.write(angulo);  // enviamos el valor escalado al servo.
  
  Serial.print("Angulo:  "); 
  Serial.println(angulo);
  
  delay(10);            
} 
