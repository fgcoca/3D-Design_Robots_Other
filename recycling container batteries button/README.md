# **Caja para placa con display de 7 segmentos** 

![Image][1] 

 [1]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Caja-en-pruebas-mini.png

# **Introducción**  
Para poder probar ejemplos con un display de 7 segmentos con **FPGA** en la tarjeta **Alhambra II** es necesario montar una plaquita y para evitar problemas de cortos, averias y posibles sustos lo ideal es crear una **carcasa imprimible** para la placa, lo que se hace realidad con un **diseño en 3D** realizado en **FreecCAD**.  
Pero todo esto no es una idea nueva, sino la adaptación de la idea del maestro **Obijuan** tanto de la plaquita, explicada en el [tutorial 24: Display de 7 segmentos](https://github.com/Obijuan/digital-electronics-with-open-FPGAs-tutorial/wiki/V%C3%ADdeo-24:-Display-de-7-segmentos "tutorial 24: Display de 7 segmentos") como de la caja, basada en la explicada en este [enlace](https://github.com/Obijuan/3D-parts/wiki/Carcasa-para-placa-con-display-7-segmentos)  
El primer paso necesario es adaptar el esquema para las nuevas necesidades. El resultado lo podemos ver en la imagen.  
 ![Image][2]
 
 [2]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/scheme.png  
 
Si se ha realizado con resistencias de 220 ohmios en lugar de los 100 ohmios originales es simplemente por disposición de material y su única influencia es que los segmentos se iluminarn más debilmente.  

## **Impresión 3D**
Descargaar los archivos stl desde la zona de descargas.  
Se ha impreso con los siguientes parámetros:  
* Material: PLA Gold Ingeo de Sakata 3D filaments
* Impresora: Prusa i3 Psique, Nozzle 0.4
* Laminador: Cura 3.2.1
* Altura de capa: 0.2mm
* Velocidad: 45mm/s

## **Descargas**
| Fichero | Descripción|
| ---------- | ---------- |
| [Caja-7segmentos.fcstd](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Design/Caja-7segmentos.fcstd)   | Archivo fuente para **Freecad** 0.17   |
| [base-7segmentos.stl](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/stl/base-7segmentos.stl)   | Archivo STL para la parte posterior   |
| [tapa-7segmentos.stl](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/stl/tapa-7segmentos.stl)   | Archivo STL para la parte delantera   |

También tenemos disponibles los archivos en formato STEP para poderlos abrir con otras herramientas CAD. 

| Fichero | Descripción|
| ---------- | ---------- |
| [base-7segmentos.step](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/step/base-7segmentos.step)   |Archivo STEP para la parte posterior  |
| [tapa-7segmentos.step](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/step/tapa-7segmentos.step)   |Archivo STEP para la parte delantera  |  

## **Montaje**
**1. Montaje de la PCB**   
Realizamos el montaje de la PCB realizando las conexiones sobre una placa perforada siguiendo el esquema anterior. Para una conexión rápida los pines que van a los ándos de los LEDs se llevan a una tira de pines hembra, lo que permitirá un conexionado rápido en la tarjeta **FPGA Alhambra II**. La conexión del cátodo común (GND) la dotamos de un cable tipo dupont con conector hembra en un extremo.  
 ![Image][3]
 
 [3]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Montaje-7seg-mini.png
 
**2. Impresión de piezas**   
Descargamos e imprimimos las piezas  

| Base | Interior tapa | Exterior tapa |
|-- | -- | -- |
| ![](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Base-caja-mini.png)  | ![](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Tapa-caja-interior-mini.png) | ![](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Tapa-caja-exterior-mini.png)  |

**3. Colocación de la PCB**  
Colocamos la PCB en la tapa o pante anterior de forma que el display de 7 segmentos se vea por la ventana efectuada a tal efecto.  
![Image][4]
 
[4]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Montaje-caja-1-mini.png  
 
 **4. Cierre**  
 Colocamos la tapa posterior y ya tenemos el montaje acabado  
![Image][5]
 
[5]:  https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/Montaje-caja-2-mini.png

Todas las imágenes las tenemos en el siguiente enlace:  [Fotos](https://github.com/fgcoca/FPGA_Alhambra_II/tree/master/3D/Caja-7segmentos/images)  

## **Adaptación de conexionado**
Si por algún motivo queremos conectar la placa de forma externa o a otra tarjeta la solución es muy simple, usamos cables tipo dupont, male/female en este caso, y tenemos el problema solucionado. En las imágenes vemos la idea.


| Conexión externa en la Alhambra II | Conexión externa en la icezum Alhambra | 
|-- | -- | 
| ![](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/dupont-alhambraII-mini.png)  | ![](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/thumbnail/dupont-icezum-mini.png) | 

## **Pruebas**
En este apartado vamos a describir los tres ejemplos realizados para realizar el test del correcto funcionamiento.

### **Test de segmentos**
Para comprobar que todos los diodos LEDs están correctamente conectados vamos a realizar un circuito en [icestudio](https://github.com/FPGAwars/icestudio/) que haga que todos se enciendan y se apaguen cada 4 segundos.  
El circuito del **ejemplo 1** en icestudio. Disponible para [descargar](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/Ejemplo-1.ice). Necesitamos para el montaje una [tabla 4-8](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/tabla-bin-4-8.ice) en binario.

![Image][6]
 
[6]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/Images/Ejemplo-1%20%E2%94%80%20Icestudio.png

Un video del funcionamiento lo tenemos en el [enlace de Youtube](https://www.youtube.com/watch?v=fXAYxmS0DNs&feature=youtu.be)

### **Contador hexadecimal de un dígito**
En este segundo ejemplo en [icestudio](https://github.com/FPGAwars/icestudio/) vamos a implementar un circuito que realice una cuenta cíclica hexadecimal de un dígito.  
El circuito del **ejemplo 2** en icestudio. Disponible para [descargar](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/Ejemplo-2.ice). Necesitamos para el montaje una [tabla 4-7](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/tabla-hex-4-7.ice) en hexadécimal.

![Image][7]
 
[7]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/Images/Ejemplo-2%20%E2%94%80%20Icestudio.png

Un video del funcionamiento lo tenemos en el [enlace de Youtube](https://www.youtube.com/watch?v=0TFfjMD-Fqs&feature=youtu.be)


### ** Decontador hexadecimal de un digito**
Este tercer ejemplo en [icestudio](https://github.com/FPGAwars/icestudio/) realizamos un circuito que haga una cuenta cíclica hexadecimal descendente de un dígito.  
El circuito del **ejemplo 3** en icestudio. Disponible para [descargar](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/Ejemplo-3.ice). Necesitamos para el montaje una [tabla 4-7](https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/tabla-hex-4-7.ice) en hexadécimal.

![Image][8]
 
[8]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/Test/Images/Ejemplo-3%20%E2%94%80%20Icestudio.png

Un video del funcionamiento lo tenemos en el [enlace de Youtube](https://www.youtube.com/watch?v=kwbm4inp-pA&feature=youtu.be)


## **Fecha de publicación**
Esta entrada al repositorio se creó el da 20 de agosto de 2018.

## **Autor**

[Federico Coca Caba](https://github.com/fgcoca)

## **Licencia**
![License][88]

 [88]: https://github.com/fgcoca/FPGA_Alhambra_II/blob/master/3D/Caja-7segmentos/images/licencia.png
