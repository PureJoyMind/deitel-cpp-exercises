// Deitel ch.05 exercise 5.16
// Reading 5 numbers and displaying a double row of the same num repeated as input
#include <iostream>
using namespace std;

int main(){
    int inp;// User input 
    int tmp;// Temp variable

    for (int i{1}; i <= 5; i++){// Looping 5 times for 5 input
        cout << "Enter number: ";
        cin >> inp;
        tmp = inp;// Setting temp as user input for looping as the amount of input
        for (int j{2}; j > 0; j--){// Looping 2 times for double rows
            for (tmp; tmp > 0; tmp--){// Printing inp as the amount of temp
                cout << inp;
            }
            cout << endl;// Next line for double rows
            tmp = inp;// Resetting temp for the next loop
        }
    }
}
