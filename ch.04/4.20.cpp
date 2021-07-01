// Deitel ch.04 exercise 4.20
#include <iostream>

using namespace std;

int main() {
   // initializing variables
   unsigned int passes{0}; 
   unsigned int failures{0};
   unsigned int studentCounter{1}; 

   // using while to count students
   while (studentCounter <= 10) {
      // prompt user for input 
      cout << "Enter result (1 = pass, 2 = fail): ";
      int result;
      cin >> result;

      // validating useer input
      while (result > 2 || result == 0){
         cout << "Invlaid input. Try again (1 = pass, 2 = fail): ";
         cin >> result;
      }

      // checking result         
      if (result == 1) {         
         passes = passes + 1;  
      }
      else {    
         failures = failures + 1; 
      }

      // increment studentCounter to terminate loop
      studentCounter++;  
   } 

   // displaying result
   cout << "Passed: " << passes << "\nFailed: " << failures << endl;

   // checking if more than 8 students passed
   if (passes > 8) {
      cout << "Bonus to instructor!" << endl;
   }
} 
