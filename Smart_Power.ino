#include <PZEM004Tv30.h>

PZEM004Tv30 pzem1(5, 16);
PZEM004Tv30 pzem2(2, 4);
PZEM004Tv30 pzem3(14, 12);

void setup() {
  Serial.begin(9600);
}

void loop() {
     Fasa1();
     Serial.println();
     delay(2000);
     Fasa2();
     Serial.println();
     delay(2000);
     Fasa3();
     Serial.println();
     delay(2000);
}
