// Deitel ch.04 exercise 4.27
// finding out if a number is a palindrome
#include <iostream>

using namespace std;

int main(){
    // declaring user input
    int inp{0};

    // prompting user to enter a 5-digit number
    cout<< "Enter a 5 digit number: ";
    cin>> inp;

    // declaring 5 digits from a to e
    int a, b, c, d, e;

    // seperating each digit and storing it in a different variable
    a = inp % 10;
    b = (inp / 10) % 10;
    c = (inp / 100) % 10;
    d = (inp / 1000) % 10;
    e = (inp / 10000) % 10;

    // using nested if statments to check each two digit
    if(a == e){
        if(b == d){
            cout << inp << " is a palindrome!" << endl;
        }
    }
    else{
        cout << inp << " is not a palindrome!" << endl;
    }
}
