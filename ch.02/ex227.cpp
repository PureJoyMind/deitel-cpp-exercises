//exercise 2.27
//static static_cast
#include <iostream>

using namespace std;

int main(){
  char inp;
  cout<< "Enter a character: ";
  cin>> inp;

  cout<< static_cast<int>(inp) << endl;

  int inp2;
  cout << "enter a digit: ";
  cin>> inp2;

  cout<< static_cast<int>(inp2) << endl;
}
