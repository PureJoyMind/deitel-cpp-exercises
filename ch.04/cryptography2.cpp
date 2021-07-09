// Deitel ch.04 exercise 4.37
// Decrypting a four digit number
// encrypted by the cryptography1.cpp file
#include <iostream>

using namespace std;

int main(){
    // declaring the 4-digit integer
    int input{0};
    // prompting the user to enter a 4-digit number
    cout << "Enter a 4-digit number: ";
    cin >> input;

// in order to continue we need to seperate each digit
    // declaring each digit
    int dig1{0}, dig2{0}, dig3{0}, dig4{0};

    // seperating each digit
    dig1 = input % 10;
    dig2 = (input / 10) % 10;
    dig3 = (input / 100) % 10;
    dig4 = (input / 1000) % 10;

// swapping the first digit with the third
    // declaring a tmp variable
    int tmp13;
    tmp13 = dig1;

    // replacing the first digit
    dig1 = dig3;
    // replacing the third digit with the temp
    dig3 = tmp13;

// swapping the secong digit with the fourth
    // declaring a temp variable
    int tmp24;
    tmp24 = dig2;

    // replacing the second digit
    dig2 = dig4;
    // replacing the fourth digit with the temp
    dig4 = tmp24;

// reversing the encryption here
    // adding 10 and reducing 7 which is basicly adding 3
    // if the result is bigger than or equal to 10
    // reduct another 10
    dig1 += 3; 
    dig2 += 3; 
    dig3 += 3; 
    dig4 += 3; 

    // writing 4 for loops to check comdition
    if (dig1 >= 10)
        dig1 -= 10;
    if (dig2 >= 10)
        dig2 -= 10;
    if (dig3 >= 10)
        dig3 -= 10;
    if (dig4 >= 10)
        dig4 -= 10;

// declaring the decrypted number
    int decrypted{0};

// raising digits to powers of 10 to add to each other
    decrypted = dig1 + (dig2 * 10)+ (dig3 * 100)+(dig4 * 1000);

// printing the final output
    cout << "The decrypted key is: "<< decrypted << endl;

}