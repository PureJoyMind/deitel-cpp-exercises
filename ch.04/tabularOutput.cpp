// Deitel ch.04 exercise 4.18
// c++ program to print a table of values
#include <iostream>

using namespace std;

int main(){
    // initializing n to 1
    int n{1};

    // printing the header
    cout << "N\t5*N\t10*N\t15*N\n";


    while (n <= 12)
    {   // using the \t to put spaces between outputs
        cout << n << "\t" << 5 * n << "\t"
             << 10 * n << "\t" << 15 * n << endl;
        // adding 1 to n for the counter
        n++;
    }
}