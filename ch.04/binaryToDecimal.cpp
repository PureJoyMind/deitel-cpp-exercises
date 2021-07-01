// Deitel ch.04 exercise 4.28
// printing the equivilant of a binary number in decimals
#include <iostream>

using namespace std;

// Since all variables declared here are integers
// Please do not enter a binary number with more than 10 digits.
// It will result in a run-time error.

int main(){
    // declaring the binary number
    int binary;

    // prompting user to enter binary number
    cout << "Enter binary number: ";
    cin >> binary;

    // declaring the final decimal variable
    int decimal{0};

    // digits variable for each digit
    int digit;

    // to separate digits of the binary
    int tensCount{10};

    // the power which 2 is raised to in the conversion of binary to decimal
    int two{1};

    // separating the first digit
    digit = (binary % 10);

    // exiting loop condition
    int loop{1};

    // adding the first digit to the decimal value
    decimal += (digit * two);
    

    while(loop == 1){
        // two raised in each loop
        two *= 2;
        
        // seperating each digit in each loop
        digit = (binary / tensCount) % 10;
        tensCount *= 10; // ten raised in each loop

        // loop exit condition
        // since its a binary number, the power of 10 its divided by
        // in each loop must be less than the integer value of the binary
        if(tensCount > binary){  
            loop = 0;
        }

        // adding the calculated binary digit to the decimal
        decimal += (digit * two);
    }

    // printing the output
    cout << "The decimal value of: "<< binary;
    cout << " is: " << decimal << endl;
}
