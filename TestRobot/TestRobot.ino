#define EnableA 11
#define EnableB 12
#define PhaseA 9
#define PhaseB 6
#define modeArd 4

#define speed 40

#include "DRV8835.h"

DRV8835 inClass(PhaseA, EnableA, PhaseB, EnableB, modeArd);  //constructor
   

void setup() {
  // put your setup code here, to run once:
  inClass.SetPinMode();
}

void loop() {
  inClass.setForwards();
  inClass.setRotateRight();
  // put your main code here, to run repeatedly:

}
