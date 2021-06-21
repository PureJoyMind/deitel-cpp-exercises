// Deitel ch.03 exercise 3.16
// Health Profile class

#include <string>

class HealthProfile{
public:
  // initialization
  HealthProfile (std::string nameF, std::string nameL, std::string gen,
    int height, int weight, int dateB, int monthB, int yearB)
  : gender{gen}, height{height}, weight{weight},
  firstName{nameF}, lastName{nameL}, yearOB{yearB}{
     if(dateB <= 30 && dateB >= 1){
       dateOB = dateB;
     }
     if(monthB <= 12 && monthB >= 1){
       monthOB = monthB;
     }
   }

  // get and set functions
void setGender(std::string gend){
  gender = gend;
}
std::string getGender() const{
  return gender;
}

void setHeight(int tall){
  height = tall;
}
int getHeight() const{
  return height;
}

void setWeight(int kilo){
  weight = kilo;
}
int getWeight()const{
  return weight;
}

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

double bmi(){
  double bmi;
  bmi = (weight * 703)/(height * height);
  std::cout << "your BMI is: "<< bmi <<std::endl;
  std::cout<<"BMI VALUES \n";
  std::cout<<"Underweight: less than 18.5\n";
  std::cout<<"Normal:      between 18.5 and 24.9\n";
  std::cout<<"Overweight:  between 25 and 29.9\n";
  std::cout<<"Obese:       30 or greater"<<std::endl;

  return bmi;
}

private:
  std::string gender, firstName, lastName;
  int height, weight, dateOB, monthOB, yearOB;
};
