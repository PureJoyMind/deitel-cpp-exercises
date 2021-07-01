// Deitel ch.04 exercise 4.30
// Fibonacci sequence

// Warning: This is an endless loop! it will not close.
// Use: CTRL + C to stop execution
#include <iostream>

using namespace std;

int main(){
    // three variables declared
    int x{0};
    int y{1};
    int z;

    // printing the first number of the sequence
    cout << 1 << endl;

    // infinite while loop
    while(true){
        // adding x and y (the last two values in the sequence)
        z = x + y;

        // replacing z with the smaller value
        // so the sequence adds the last 2 numbers
        if(x > y){
            y = z;
        }
        else{
            x = z;
        }
        
        cout << z << endl;
    }
}