# Ejemplos_Servomotor
Ejemplos para el control de servomotores

![Servo RDS5160 60Kg](https://naylampmechatronics.com/2581-large_default/servo-rds5160-60kg.jpg)
![Micro Servo SG90 1.5Kg](https://naylampmechatronics.com/774-large_default/servo-sg90-15kg.jpg)

Información detallada de servomotores en: [Tutorial servomotores](https://naylampmechatronics.com/blog/33_Tutorial-uso-de-servomotores-con-arduino-.html)

## Contenido
* **Potenciometro:** Programa para controlar un servomotor con un Potenciómetro.
* **MultipleServo:** Programa para controlar varios servomotores, cada servo se manipula con un potenciómetro.
 
## Requerimientos
 **Software**
  * IDE Arduino
  * Libreía [Servo](https://www.arduino.cc/reference/en/libraries/servo/) (Ya viene instalada en el IDE Arduino)
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * Servomotor ([SG90](https://naylampmechatronics.com/servomotores/21-servo-sg90-15kg.html), [SG-5010](https://naylampmechatronics.com/servomotores/22-servo-sg-5010-6kg.html), [MG996R](https://naylampmechatronics.com/servomotores/343-servo-mg996r-11kg.html), etc)
  * Fuente DC 6V (Para alimentar los servomotores)
  
## Conexiones
### Ejemplo 1: Potenciometro

  Servomotor   | Arduino
  -------------|----------
  GND     |   GND  
  VCC     |   5V (*) 
  DATA    |   D3   
  
  (*) El VCC del servo conectar a los 5V del Arduino  solo si es un motor de poca corriente como el SG90, para otros servos usar una fuente externa
 
  Potenciómetro| Arduino
  -----------|------------
  Pin 1    |   5V  
  Pin 2    |   A0  
  Pin 3    |   GND   
  
  Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines


### Ejemplo 2: MultipleServo

  Servomotor/Potenciómetro  | Arduino
  -----------|---------------
  GND (todos los servos)|   GND  
  VCC (todos los servos)|   6V (Fuente externa) 
  DATA1 (Servo1)  |   D3 
  DATA2 (Servo2)  |   D4 
  DATA3 (Servo3)  |   D5 
  DATA4 (Servo4)  |   D6 
  DATA5 (Servo5)  |   D7  
  Pin1 (todos los Pot.)|   5V  
  Pin3 (todos los Pot.)|   GND  
  Pin2_1 (Pot1)   |   A0  
  Pin2_2 (Pot2)   |   A1
  Pin2_3 (Pot3)   |   A2
  Pin2_4 (Pot4)   |   A3
  Pin2_5 (Pot5)   |   A4 
 
 Puede cambiar las conexiones a otros pines del arduino modificando las variables que definen los pines

## Licencia
Los ejemplos son Open Source, creados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial servomotores](https://naylampmechatronics.com/blog/33_Tutorial-uso-de-servomotores-con-arduino-.html)
 * [Servomotores](https://naylampmechatronics.com/26-servomotores)
 * [Servo Library](https://www.arduino.cc/reference/en/libraries/servo/)

