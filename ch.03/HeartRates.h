// Deitel ch.03 exercise 3.15
// heart rate class for deitel c++ ch.03

#include <string>
 class HeartRates{
 public:
   // initialization
   HeartRates(std::string nameF, std::string nameL, int dateB, int monthB,
     int yearB)
     : firstName{nameF}, lastName{nameL}, yearOB{yearB}{
        if(dateB <= 30 && dateB >= 1){
          dateOB = dateB;
        }
        if(monthB <= 12 && monthB >= 1){
          monthOB = monthB;
        }
      }
      // get and set functions
    void setName(std::string name){
      firstName = name;
    }
    std::string getName() const{
      return firstName;
    }

    void setNameLast(std::string nameLast){
      lastName = nameLast;
    }
    std::string getNameLast() const {
      return lastName;
    }

    void setDate(int date){
      dateOB = date;
    }
    int getDate() const {
      return dateOB;
    }

    void setMonth(int month){
      monthOB = month;
    }
    int getMonth() const{
      return monthOB;
    }

    void setYear(int year){
      yearOB = year;
    }
    int getYear() const{
      return yearOB;
    }

    // calculating age
    int age(){
      int current{2021};
      int age;
      age = current - yearOB;
      return age;
    }

    // maximum heart haert rate
    int maxHeartRate(int age){
      int max;
      max = 220 - age;
      std::cout << "Maximum Heart Rate is: " << max << std::endl;
      return max;
    }

    //target heart rate
    void targetRate(int max){
      double rate1 , rate2;
      rate1 = (max * 50) / 100;
      rate2 = (max * 85) / 100;
      std::cout << "your target heart rate is between " << rate1 <<
      " and " << rate2 << std::endl;
    }
 private:
   std::string firstName, lastName;
   int dateOB, monthOB, yearOB;
 };
