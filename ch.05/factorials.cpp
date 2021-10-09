// Deitel ch.05 exercise 5.13 
// Calculating factorials of 1 through 20
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n{20};// for looping 20 times

    cout << "The factorials  of 1 through 20:"<< endl;

    long factorial{1};// the variable for each calculation
    for(int i{1}; i <= n; i++)// for looping 20 numbers to calculate each ones fact
    {
        for(int j{1}; j <= i; j++)// calculating i's factorial
        {
            factorial *= j;
        }

        cout << setw(15) << left << to_string(i) << left << to_string(factorial) << endl;

        factorial = 1;// resetting for the next loop
    }
}
