#include <cvzone.h>

SerialData serialData(1,1);


int valsRec[1];
void setup() {
  serialData.begin();
  pinMode(13, OUTPUT);
  // Serial.begin(9600);
}

void loop() {
  serialData.Get(valsRec);
  digitalWrite(13, valsRec[0]);
  // Serial.println(valsRec[0]);
}

