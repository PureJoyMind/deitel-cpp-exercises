// Deitel ch.04 exercise 4.26
// An hollow square of asterisks
#include <iostream>

using namespace std;

int main(){
    // declaring the size
    int size;

    // prompting user to enter size
    cout << "Enter square size: ";
    cin >> size;

    // creating counterfor while loop
    int counter{size};

    // printing the top line
    while (counter != 0){
        cout << "*";
        counter--;
    }
    cout << endl; // going to the next line
    
    // using another counter for the two side lines
    int bodyCount{size - 2}; // not counting the top and bottom lines

    // printing the body
    while (bodyCount != 0){
        // using a nested while loop to print the body line by line
        int lineCount{size}; // for the side body lines
        int emptyCount{size - 2}; // for the empty body
        
        // print ing 1 line
        cout << "*";
        while(emptyCount != 0){
            cout << " ";
            emptyCount--;
        }
        cout << "*";
        cout << endl;
        bodyCount--;
    } 
    
    counter = size; // resetting counter for the bottom line
                    // because it was set to 1 in line 19 while loop

    // printing the bottom line
    while (counter != 0){
        cout << "*";
        counter--;
    }
    cout << endl; // going to the next line
}