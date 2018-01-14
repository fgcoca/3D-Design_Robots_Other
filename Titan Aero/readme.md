# **Ensamblado del extrusor Titan Aero de E3D** 


![Captura][1]  ![Real][2]

 [1]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/mini/101.jpg
 [2]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/mini/113.jpg
 
Unas pinceladas sobre mi ensamblado del extrusor **Titan Aero** de altas prestaciones de la empresa británica [E3D](https://e3d-online.dozuki.com/). El montaje final se hará en la impresora 3D CoBot, una Prusa I3 Psique con marco de aluminio.

En el enlace tenemos la gua completa original de ensamblado [E3D-ONLINE](https://e3d-online.dozuki.com/Guide/Titan+Aero+Assembly/23) disponible en varios idiomas y que podemos descargar en pdf.

Lo aquí expuesto refleja mi propia experiencia y no es sustitutivo de la información original en ningñun caso y bajo ninguna circunstancia.

### **Umboxing**

El Titan Aero se presenta en un formato como el siguiente:

![Presentación](https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/100.jpg "Embalaje original")

Los componentes necearios para el ensamblado se ven en la imagen siguiente:

![Umboxing]( https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/101.jpg "Umboxing")

En la imagen podemos ver la parte del nozzle, puente térmico y calefactor ya ensamblados y colocados en el refrigerador. También se aprecia en la parte inferior derecha la tarjeta que acompaña al kit.

Cabe destacar que en la imagen el tubo de PTFE ya está cortado en dos partes, una de 23 mm para colocar en su guía y el resto que nos va a servir para introducir el filamento en el idler.

En las imágenes siguientes podemos observar como se monta el tubo PTFE de 23 mm y el rodamiento.

![SinMontar][3]  ![Montado][4]

 [3]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/102.jpg
 [4]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/103.jpg

El resto de partes que vemos son las necesarias, junto con las que vemos a continuación para el montaje del extrusor.

### **Resto de componentes**

Para instalar el Titán en la impresora debemos tener la pieza que separa el motor del cuerpo del extrusor y que a su vez une el conjunto al carro del eje X.

En este caso concreto la piezas las suministra la empresa creado del marco de la Prusa I3 Psique, que no es otra que [Createc 3D](https://createc3d.com/ "Createc 3D")

En las imágenes siguientes vemos estas dos piezas ensambladas. Además también podemos apreciar como va montada la pieza donde se sujeta la correa de transmisión.

![Vista1][5]  ![Vista2][6]

[5]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/104.jpg
[6]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/106.jpg
 
El siguiente paso es montar el engranaje pequeño en el motor fijándolo mediante el tornillo prisionero que se facilita para ello.

![Motor][7]

 [7]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/105.jpg
 
 ### **Montaje del extrusor**
 
 Vamos a colocar el motor y el cuerpo del extrusor en el soporte de montaje. Situamos los elementos tal y como se observa en la imagen y usamos el tornillo M3x8mm (inferior derecha de la imagen) para sujetar el conjunto dejando el resto de agujeros alineados para atornillar posteriormente.

![MotorExtruder][8]

 [8]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/107.jpg
 
 Ahora procedemos a colocar el engranaje grande en su lugar. El engranaje del motor y este deben quedar alineados, tal y como se ve en la imagen.
 
![MotorEngranaje][9]

 [9]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/108.jpg
 
 Colocamos ahora el conjunto regulador de fricción del filamento y el Idler en su posición para que el conjunto quede como vemos seguidamente.
 
![MotorEngranaje][10]

[10]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/109.jpg  
 
Como observamos el trozo de tubo PTFE largo está insertado en el Idler hasta que hace tope y se aprecia perfectamente a través de los dos orificios.

Ahora colocamos la tapa o refrigerador de forma que todo el conjunto quede bien acoplado y atornillamos todo el conjunto al motor.

![MotorEngranaje][11]

[11]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/109-tapa.jpg

Los tornillos suministrados son un poco más largos de lo necesario por lo que debemos suplementarlos con arandelas hasta que aprieten correctamente (tres en mi caso) y asegrándonos que el que va en el orificio del rodamiento una de las arandelas sea la dentada que viene con el kit.

![MotorTapa][12]

[12]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/110.jpg

Finalmente sujetamos el ventilador con sus cuatro tornillos de rosca chapa, colocamos el termistor y el cartucho calefactor sujetándolos en su lugar y tenemos el extrusor listo para montar en el carro del eje X.

![MotorAcabado][13]

[13]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/111.jpg

### **Ajuste de los pasos por mm en Marlin**

Una vez montado el extrusor en la impresora lo único que resta es ajustar los pasos por mm en Marlin o para nuestro firmware concreto. Calculando para nuestro caso por cualquiera de los métodos que podemos encontrar en la web y realizando un ajuste final por medida de longitud extruida en mi caso llego a la conclusión de que debo configurlo a 400.

Y finalmente ya tenemos el flamante extrusor 100% operativo y en las primeras pruebas realizadas se observa un funcionamiento muy preciso con unos resultados excelentes.

![MotorAcabado][14]

[14]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Titan%20Aero/Images/113.jpg

### **Author**

[Federico Coca Caba] (https://github.com/fgcoca)

### **License**
![License][88]

 [88]: https://github.com/fgcoca/3D-Design_Robots_Other/blob/master/Lapicero/Licencia/licencia.png
