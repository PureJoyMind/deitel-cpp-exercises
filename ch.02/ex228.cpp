//exercise 2.28
//seperating an int into digits
#include <iostream>

using namespace std;
int main(){
  int inp{0};
  cout<< "Enter a 4 digit number: ";
  cin>> inp;

  int a, b, c, d;
  a = inp % 10;
  b = (inp / 10) % 10;
  c = (inp / 100) % 10;
  d = (inp / 1000) % 10;

  cout<< a <<"  "<< b <<"  "<< c <<"  "<< d <<endl;
}
