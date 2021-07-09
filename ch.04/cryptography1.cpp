// Deitel ch.04 exercise 4.37
// Encrypting a four digit number
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

// replacing each digit with:
// digit added by 7 then the remainder of division by 10
    dig1 = (dig1 + 7) % 10;
    dig2 = (dig2 + 7) % 10;
    dig3 = (dig3 + 7) % 10;
    dig4 = (dig4 + 7) % 10;

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

// declaring the encrypted number
    int encrypted{0};

    // raising digits to powers of 10 to add to each other
    encrypted = dig1 + (dig2 * 10)+ (dig3 * 100)+(dig4 * 1000);

    // printing the final output
    cout << "The encrypted key is: "<< encrypted << endl;
}