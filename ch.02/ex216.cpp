//exrecise 2.16
#include <iostream>

using namespace std;
int main(){
  int no1{0}, no2{0};//gets nummbers
  cout<< "enter number 1: ";
  cin>> no1;

  cout<< "enter number 2: ";
  cin>>no2;
//declares and operates
  int sum;
  sum = no1 + no2;
  int pro;
  pro = no1 * no2;
  int diff;
  diff = no1 - no2;
  int quo;
  quo = no1 / no2;

  cout<<"the sum is: \n"<< sum <<endl;
  cout<<"the product is: \n"<< pro <<endl;
  cout<<"the difference is: \n"<< diff <<endl;
  cout<<"and the quotient is: \n"<< quo <<endl;
}
