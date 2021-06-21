// Deitel ch.03 exercise 3.15
// heart rate driver program for HeartRates class
#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

void displayInfo(HeartRates Person){
  cout << "first name: "<< Person.getName()<<endl;
  cout << "last name: "<< Person.getNameLast()<<endl;
  cout << "age: "<< Person.age()<<endl;
  cout << "date of birth: "<<
  Person.getYear()<<"/"<< Person.getMonth()<<"/"<<Person.getDate()<<endl;
}

int main(){
  // prompting the user to enter data for
  // initializing the HeartRates object
  string first, last;
  int year, month, date;
  cout << "Enter the needed data in order: ";
  cout << "first name, last name, date of birth, month of birth, year of birth...\n";
  cin >> first >> last >> date >> month >> year;

  HeartRates Man{first, last, date, month, year};

  displayInfo(Man);
  int age;
  age = Man.age();
  int max;
  max = Man.maxHeartRate(age);
  Man.targetRate(max);

}
