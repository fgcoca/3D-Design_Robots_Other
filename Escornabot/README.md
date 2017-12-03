# **Procesos iniciales para Escornabot en Ubuntu 16.04**

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Logo-Escornabot-m.png)  ![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Mi-Escornabot-m.jpg) 

Prueba de Escornabot Brivoi con botonera on board, mediante WiFi, con Bluetooth y con librería externa. Para ellos vamos a describir al detalle los procesos a seguir en cada caso.

En el siguiente enlace podemos ver el control del Escornabot Brivoi desde la botonera onboard, tal y como viene programado en mi caso.

[![](https://i9.ytimg.com/vi/Mb06r2Gx4bg/default.jpg?v=5a217ba1&sqp=CJDFj9EF&rs=AOn4CLCDWCRdjn5HA306jXjyHb27L1BORA)](https://youtu.be/Mb06r2Gx4bg)

# **Enlaces**
Toda la información oficial relativa a escornabot está en:

+ Web: https://escornabot.com/web/es
+ Repositorio: https://github.com/escornabot
+ Librería desarrollada por Prudencio Luna y Pedro Ruiz para el Club de Tecnología, programación y robótica de Granada: https://github.com/clubroboticagranada/libreria-arduino-escornabot
+ Programación ESP01: https://aindustriosa.org/2017/09/escornabot-muwi-mucho-mas-que-wifi/

# **Configurar el IDE de Arduino para la tarjeta ESP8266**

Una vez arrancado el IDE nos vamos a:

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Conf-IDE-ESP8266_1.png)

Y escribimos esta dirección http://arduino.esp8266.com/stable/package_esp8266com_index.json en el gestor de URLs.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Conf-IDE-ESP8266_2.png)

Ahora vamos a agregar la placa desde el gestor de tarjetas.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Conf-IDE-ESP8266_3.png)

Procedemos a la instalación del ESP8266.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Conf-IDE-ESP8266_4.png)


## **Control WiFi**

En Escornabot han desarrollado un mando universal para el control via WiFi mediante un módulo ESP01 que han llamado ESP-MUWi (Mando Universal WiFi) al que accedemos desde uno de los repositorios.
En el blog de https://aindustriosa.org encontramos una entrada donde nos describen todos los procesos para programar el módulo WiFi y el acceso al mando universal, el enlace es: https://aindustriosa.org/2017/09/escornabot-muwi-mucho-mas-que-wifi/ 
A partir de la versión 2.12 de Escornabot es posible llevar a cabo este proceso sin ningún problema, tal y como hemos hecho nosotros.
### **Mando universal**
Tal y como se describe en el enlace citado lo que se pretende es reprogramar el ESP01 para que tenga el siguiente comportamiento:
1. Levantar el punto de acceso WiFi ESCORNABOT en abierto (sin clave).
1. Crear un portal cautivo en el que todas las peticiones DNS serán atendidas por el propio ESP-01 y redirigidas a sí mismo.
2. Ejecutar un servidor web que atienda todas las peticiones recibidas y que nos sirva la página web con el mando de control remoto.
3. Transmitir al Escornabot la información que se reciba de dicho mando. 
Con el Escornabot encendido nos podremos conectar a él y acceder directamente al mando de control remoto.

Conectamos nuestro dispositivo con la nueva WiFi.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/ConectWiFi-m.png)

Ya podemos acceder a la web que nos sirve el mando universal por cualquiera de las vías que vemos a continuación.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Navegador-Captive-m.png)  ![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Navegador-IP-m.png) 

### **Programador para el módulo ESP01**
Aunque existen muchas formas de programar el ESP01 en la web explican muy claramente como programarlo utilizando un Arduino nano y siguiendo el procedimiento recomendado no debe plantearnos ningún tipo de problema. Es posible programarlo usando un Arduino UNO u otro modelo y en este caso, como dispone de un pin de alimentación de 3.3 V ya no es necesaria la fuente externa.
Programador con Arduino nano
Necesitamos los siguientes materiales:
    1 - Arduino Nano
    1 - Protoboard
    2 - Resistencia 10KΩ
    1 - Resistencia 1KΩ
    1 - Resistencia 2KΩ
    1 - Fuente de alimentación 3.3 V y 250+ mA
    Cables de conexión
Realizamos el montaje que podemos ver en el enlace  https://aindustriosa.org/2017/09/escornabot-muwi-mucho-mas-que-wifi/

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Programador-montado.jpg)

### **Programador con Arduino UNO**
Utilizando los mismos componentes realizamos el mismo montaje teniendo en cuenta que los pines que usamos para hacer nuestro programador son: TX, RX, GND y Reset.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Programador-UNO.png)

Aunque las placas Arduino disponen de pines de 3.3V podriamos pensar en usar este pin como fuente para nuestros programadores, sobre todo si no tenemos una fuente de alimentación externa de 3.3 V, pero no es aconsejable porque suele hacer la programación del módulo ESP01 muy inestable.


### **Programación del ESP01 desde el IDE de Arduino**
Nos descargamos el código del firmware para el módulo ESP01 desde el enlace:

https://github.com/mgesteiro/escornabot-MUWi/releases/latest

Descomprimimos el archivo descargado y abrimos el fichero MUWi.ino con el IDE de Arduino y ya podemos subirlo al ESP-01.

Puede ser necesario, para poder usar el puerto USB desde el IDE de Arduino en Ubuntu, añadir tu usuario al grupo dialout. En una terminal vamos a ejecutar el siguiente comando:
        *~$ sudo usermod -a -G dialout $USER ->añadimos el usuario USER al grupo dialout.*
El comando ‘usermod‘ lo usamos para cambiar los atributos de un usuario ya existente. La opción -G nos permite indicar grupos suplementarios y la opcíon -a,  añadir al usuario al grupo suplementario indicado en G sin eliminarlo de otros grupos. Es necesario para que el usuario pueda acceder a los dispositivos serie USB.

### **Comprobación del funcionamiento del ESP01**
Si el proceso de programación ha finalizado correctamente, el ESP-01 ejecutará, justo a continuación, el programa recién cargado, con lo que podrás comprobar que todo funciona: para ello abre el Monitor Serie del IDE de Arduino (menú Herramientas -> Monitor Serie), configúralo a 9600 baudios, conéctate con tu móvil (o cualquier otro dispositivo) al punto de acceso del ESP-01 (= Escornabot), espera a que te aparezca el mando en la pantalla (tal y como se ve en la tercera imagen de este artículo) y pulsa sus teclas. Si todo es correcto, verás cómo salen en la ventana del Monitor Serie tus pulsaciones en forma de letra (n = North, s = South, e = East, w = West y g = Go):

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Funcionamiento-Monitor-Serial.png)

En el siguiente video vemos en acción el control remoto MUWi de EscornaBot.

[![](https://i9.ytimg.com/vi/8PU0huBNPnA/default.jpg?v=5a217bd2&sqp=CJDFj9EF&rs=AOn4CLCD5jNsQp0RH2m-vdIpOz8Uf74ShQ)](https://youtu.be/8PU0huBNPnA)

# **Control vía Bluetooth desde App para Android**

Jorge Lobo (@lobo_tic en Twitter) tiene preparada una sencilla aplicación para dispositivos Android con la herramienta MIT App Inventor. Se trata de una App simplemente funcional que podemos descargar desde cualquiera de los enlaces:

* Desde Google Drive:
https://drive.google.com/file/d/0BwtFTf5rXVKGYmNjaXhzUk9ieGc/view?usp=sharing

* Desde el enlace a este post:
http://ceipmiskatonic.blogspot.com.es/2015/04/controlar-el-escornabot-por-bluetooth.html

* Toda la información sobre la App está disponible en:
https://github.com/escornabot/android

* El firmware para el control por Bluetooth con la clase BluetoothInterface, se puede descargar en:
https://github.com/escornabot/arduino/releases

## **Conexionado Bluetooth**
La conexión con el módulo Bluetooth con Arduino es TX con RX y RX con TX (cruzados). Las otras 2 necesarias serán GND y VCC.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Conex-BT.png)

## **Procesos con la App**
Una vez descargada e instalada en nuestro dispositivo tendremos un acceso directo a la misma, pero antes de iniciarla debemos emparejar nuestros dispositivos Bluetooth. 

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Acceso-directo-m.png)

Con el Bluetooth de nuestro dispositivo activado y Escornabot encedido procedemos a vincular ambos módulos. La clave por defecto del módulo, será '1234'.

Si el Escornabot está conectado y emparejado con nuestro dispositivo, el LED presente en  el adaptador Bluetooth debe estar iluminado y no parpadear.

Una vez hecho esto, buscaremos el dispositivo bluetooth del escornabot con el botón 'Buscar escornabots' de la app, y lo seleccionaremos. Ya tendremos todo listo para programar el escornabot del mismo modo que haríamos con la botonera.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/App-m.png) ![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Boton-buscar-esconabots-m.png)

## **Comprobación del funcionamiento con Bluetooth**
Enlace al video demostrativo:


[![](https://i9.ytimg.com/vi/33xc6AU-5a0/default.jpg?v=5a217be8&sqp=CJDFj9EF&rs=AOn4CLA-90EfvtIDFRxwcGAIen16HoZcFg)](https://youtu.be/33xc6AU-5a0)

# **Reprogramación de Escornabot**
En esta sección vamos a trabajar con la librería desarrollada Prudencio Luna y Pedro Ruiz del Club de Robótica Granada que podemos encontrar en su repositorio.

* Web: http://clubroboticagranada.es/

* Repositorio: https://github.com/clubroboticagranada/libreria-arduino-escornabot

Para ello es necesario reprogramar el Arduino de nuestro Brivois y antes de nada debemos asegurarnos de tener a mano los firmwares originales para posteriormente poderlo devolver a su estado original.

En el repositorio que alberga a este documento están disponibles los correspondientes a la versión de los mismos existente en el momento en el que se realizan las pruebas aunque, en los sitios oficiales de Escornabot podremos encontrar versiones más actuales.


* Firmware para Arduino:
https://github.com/escornabot/arduino 

* Firmware MUWi:
https://github.com/escornabot/esp-muwi 

* Librería Club Robótica Granada
https://github.com/clubroboticagranada/libreria-arduino-escornabot

## **Carga de nueva librería**
Para cargar la librería en el IDE de Arduino recurrimos al método de incluirla a partir del archivo comprimido zip que previamente hemos descargado. Una vez finalizado el proceso ya tendremos disponible la nueva librera.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Libreria-m.png)

Para probar el funcionamiento de la librería vamos a usar el ejemplo de test desarrollado por los autores de la librería.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Ej-libreria-m.png)

Básicamente la librería es una clase con su constructor y con los procedimientos definidos siguientes:

* **drive (vueltas, velocidad):** Sirve para avanzar o retroceder. Se mueve el número de vueltas indicado, si son negativas va en el sentido contrario. La velocidad se da rpm.

* **turn (vueltas, velocidad):** Sirve para girar. Se indica como antes el número de vueltas o fracción a girar, si son positivas gira en un sentido y negativas en el contrario. La velocidad se da en rpm.

* **stop ():** detiene los dos motores.

* **ledON (número de led):** sirve para encender los leds de escornabot. Los leds son: 3 (ambar, posición delantera), 1 (azul, posición trasera), 2 (rojo, posición derecha), y 4 (verde, posición izquierda).

* **ledOFF (número de led):** sirve para apagar los leds de escornabot.

* **buzzON ():** enciende el zumbador.

* **buzzOFF ():** apaga el zumbador.

* **pushButton():** devuelve el valor del botón pulsado. 3 delantero, 1 trasero, 2 derecha, 4 izquierda, 5 central.

El funcionamiento se muy simple, basta con definir un elemento de la clase y ya tenemos accesibles los procedimientos definidos.

![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Lib-func.png)

En el mismo ejemplo está descrito su funcionamiento y en el enlace podemos verlo:

[![](https://i9.ytimg.com/vi/58rhLhGofAU/default.jpg?v=5a217c01&sqp=CJDFj9EF&rs=AOn4CLCx7ZRBNnN9ZPac8ookXE9fBkvKvA)](https://youtu.be/58rhLhGofAU)

***Y a jugar... con nuestro Escornabot!!***

