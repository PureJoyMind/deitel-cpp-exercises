//exercise 2.30
//BMI
#include <iostream>
using namespace std;

int main(){
  int weight,height;
  cout<< "enter your weight and height in order: ";
  cin>> weight;
  cin>> height;

  int bmi;
  bmi = weight / height * height;
  cout << "Your BMI is: "<< (weight*703) / (height * height) << endl;

  cout<<"BMI VALUES \n";
  cout<<"Underweight: less than 18.5\n";
  cout<<"Normal:      between 18.5 and 24.9\n";
  cout<<"Overweight:  between 25 and 29.9\n";
  cout<<"Obese:       30 or greater"<<endl;
}
