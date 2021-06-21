// Deitel ch.03 exercise 3.12
// Date class
#include <string>

class Date{
public:
  Date (int dayinit, int monthinit, int yearinit)
  : {
    if (day > 0 && day <310){
      day = dayinit;
    }
    if(month <= 12 && month > 0){
      month = monthinit;
    }
  }
  void display(){
    std::cout << year <<"/"<<month<<"/"<<day<< std::endl;
  }
private:
  int day, month, year;
};
