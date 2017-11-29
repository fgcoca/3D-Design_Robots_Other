![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Logo-Escornabot-m.png)  ![](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Escornabot/Images/Mi-Escornabot-m.jpg) 

# **Procesos iniciales para Escornabot en Ubuntu 16.04**

Prueba de Escornabot Brivoi con botonera on board, mediante WiFi, con Bluetooth y con librería externa. Para ellos vamos a describir al detalle los procesos a seguir en cada caso.

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




