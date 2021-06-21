// Deitel ch.03 exercise 3.11
// motor vehicle class

#include <string>

class MotorVehicle{
public:
  // initialization
  MotorVehicle(std::string make, std::string fuel,std::string color, int year, int capacity)
  : make{make}, fuelType{fuel}, color{color}, yearOfManufacture{year}, engineCapacity{capacity}{}

  // displaying car details
  void displayCarDetails(){
    std::cout << "make : " << getMake()<< std::endl;
    std::cout << "fuel type : " << getFuel() << std::endl;
    std::cout << "color : " << getColor() << std::endl;
    std::cout << "year of manufacature : " << getYear() << std::endl;
    std::cout << "engine capacity : " << getCapacity() << std::endl;
  }

  // set and get functions for the data members
  void setMake(std::string newMake){
    make = newMake;
  }
  std::string getMake(){
    return make;
  }

  void setFuel(std::string newFuel){
    fuelType = newFuel;
  }
  std::string getFuel(){
    return fuelType;
  }

  void setColor(std::string newColor){
    color = newColor;
  }
  std::string getColor(){
    return color;
  }

  void setYear(int newYear){
    yearOfManufacture = newYear;
  }
  int getYear(){
    return yearOfManufacture;
  }

  void setCapacity(int cap){
    engineCapacity = cap;
  }
  int getCapacity(){
    return engineCapacity;
  }

private:
  std::string make,fuelType, color;
  int yearOfManufacture, engineCapacity;
};
