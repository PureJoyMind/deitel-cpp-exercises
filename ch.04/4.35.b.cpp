// Deitel ch.04 exercise 4.35 part b
// calculating the e constant using factorial
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // declaring e constant
    double e{1};

    // asking the desired number of summations
    int sum{0};
    cout << "Enter the desired number of the summations: ";
    cin >> sum;

    // setting floating point precision
    cout << setprecision(6) <<fixed;
    // declaring a backup of sum
    int sumBackup{sum};

    // declaring fraction for the fractional parts
    double frct{1};

    // using while to calculate e
    while ( sum > 0){
        // calculating the  factorial
        // counter for the while loop
        double counter{1};

        // declaring the final answer
        double ans{frct};

        // using a counter controlled while loop to calculate the factorial
        while(counter < frct){
            ans *= frct - counter;
            counter++;
        }

        e += (1 / ans);
        // reducing sum and adding to fraction
        sum--;
        frct++;
    }
    // showing the output
    cout << "e with the total summation of "<< sumBackup << " times is: ";
    cout << e << endl;
}