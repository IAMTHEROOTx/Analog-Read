#include "Wire.h"

const int pinCapteur = 36; //voie1
const int pinCapteur2 = 39; //voie2


void setup() 
{
  Serial.begin(115200);
  Wire.beginTransmission(0x3D);//0x3D adress
  Wire.write(3);
  Wire.endTransmission();
}

void loop() {

  int valeurCapteur = analogRead(pinCapteur);
  int valeurCapteur2 = analogRead(pinCapteur2);
  
  Serial.printf("V1= %d V2=%d\n",valeurCapteur,valeurCapteur2);
  delay(1000);
}
