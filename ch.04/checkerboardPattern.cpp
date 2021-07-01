// Deitel ch.04 exercise 4.29
// Checkerboard pattern with astericks
#include <iostream>

using namespace std;

int main(){
    // using counter to counnt each line
    int lineCount{1};

    // using nested while loops to print
    // each line and then printing 8 lines
    while(lineCount <= 8){
        // counting each time something is printed
        int repeatCount{1};
        // using 'if' to specify if line number is odd or even
        if((lineCount % 2) == 0){ // if the number is even
            // printing extra space for the difference between lines
            cout << " ";
            // printing '* ' 8 times
            while(repeatCount <= 8){
                cout << "* ";
                repeatCount++;
            }
        }
        else{ // if the number is odd
            while(repeatCount <= 8){
                cout << "* ";
                repeatCount++;
            }
        }

        // changing line
        cout << endl;

        // adding to counter
        lineCount++;
    }
}