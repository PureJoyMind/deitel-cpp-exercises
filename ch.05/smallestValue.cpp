// Deitel ch.05 exercise 5.11
// Finding the smallest of several integers
#include <iostream>

using namespace std;

int main(){
    int num{0}; // the number of integers entered
    int numInput; // input integer for each iteration
    int smallest{numInput}; // the smallest number

    cout << "enter the number of integers: \n";
    cin >> num;

    for(int i{1}; i <= num; i++){
        cout << "Enter integer: "<< endl;
        cin >> numInput;

        if(numInput < smallest){
            smallest = numInput;
        }
    }
    cout << "the smallest number is "<< smallest << endl;
}