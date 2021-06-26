// Deitel ch.04 exercise 4.17
// finding the largets number is a series of 10 numbers

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int counter{1}; // declaring counter to count to 10
    double  number{0}; // the current number input to the program
    double largest{0}; // the largest number so far

    // setting floating point precision
    cout << setprecision(2)<<fixed;

    // while loop to start inputting numbers
    while(counter <= 10){
        // prompting the user to enter number
        cout << "Enter number: ";
        cin >> number;

        if (number > largest){
            largest = number;
        }

        // adding to counter
        ++counter;
        number = 0;
    }
    // printing out the largets number
    cout << "The largest number is: "<< largest << endl;
}