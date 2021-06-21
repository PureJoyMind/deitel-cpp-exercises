// Deitel ch.03 exercise 3.16
// driver program for HealthProfile class

#include <iostream>
#include <string>
#include "HealthProfile.h"

using namespace std;

void displayInfo(HealthProfile Person){
  cout << "first name: "<< Person.getName()<<endl;
  cout << "last name: "<< Person.getNameLast()<<endl;
  cout << "gender: "<< Person.getGender()<<endl;
  cout << "age: "<< Person.age()<<endl;
  cout<< "height: "<<Person.getHeight()<<endl;
  cout<< "weight: "<<Person.getWeight()<<endl;
  cout << "date of birth: "<<
  Person.getYear()<<"/"<< Person.getMonth()<<"/"<<Person.getDate()<<endl;
}

int main(){
  // prompting the user to enter data for
  // initializing the HeartRates object
  string first, last, gender;
  int year, month, date, height, weight;
  cout << "Enter the needed data in order: ";
  cout << "first name, last name, gender, height, weight,\n";
  cout<< " date of birth, month of birth, year of birth...\n";
  cin >> first >> last >> gender >> height >> weight >>date>>
  month>>year;

  HealthProfile Man{first, last, gender, height, weight, date, month, year};

  displayInfo(Man);

  int age;
  age = Man.age();
  int max;
  max = Man.maxHeartRate(age);
  Man.targetRate(max);

  Man.bmi();
}
