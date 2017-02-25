#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
#include "minikame.h"
MiniKame robot;

char auth[] = "authToken"; //Token de autentificación que debe coincidir con el de la App Blynk
volatile int pin = -1;
volatile int buttonDown = 0;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, "ssid", "password"); //Datos de acceso a WiFi
  robot.init();
}

void MoveItMoveIt() {
  if(buttonDown == 1) {
    switch (pin){
        case 1:
            Serial.println("walk");
            robot.walk(1,550);
            break;
        case 2:
            Serial.println("nothing");
            robot.home();
            break;
        case 3:
            robot.turnL(1,550);
            Serial.println("left");
            break;
        case 4:
            robot.turnR(1,550);
            Serial.println("right");
            break;
        case 5:
            //STOP
            Serial.println("stop");
            break;
        case 6: //heart
            robot.pushUp(2,5000);
            Serial.println("pushup");
            break;
        case 7: //fire
            robot.upDown(4,250);
            Serial.println("updown");
            break;
        case 8: //skull
            robot.jump();
            Serial.println("jump");
            break;
        case 9: //cross
            robot.hello();
            Serial.println("hello");
            break;
        case 10: //punch
            //robot.moonwalkL(4,2000);
            robot.frontBack(4,200);
            Serial.println("frontback");
            break;
        case 11: //mask
            robot.dance(2,1000);
            Serial.println("dance");
            break;
      }    
    } else {
      robot.home();
      //Serial.println("home");        
    }

}

BLYNK_WRITE_DEFAULT() {
  pin = request.pin; 
  buttonDown = param.asInt();
}

void loop()
{
  Blynk.run();
  MoveItMoveIt();
}

