// Deitel ch.03 exercise 3.11
// driver program for motor vehicle class

#include <iostream>
#include <string>
#include "MotorVehicle.h"

using namespace std;

int main(){
  MotorVehicle Honda{"R", "gasoline", "red", 1975, 5000};

  Honda.displayCarDetails();
}
