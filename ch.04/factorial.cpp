// Deitel ch.04 exercise 4.35 part a
// the factorial of a nonnegative integer
#include <iostream>

using namespace std;

int main(){
    // declaring n
    unsigned int n{0};

    // prompting the user for n
    cout << "Enter n: ";
    cin >> n;

    // counter for the while loop
    unsigned int counter{1};

    // declaring the final answer
    unsigned int ans{n};

    // using a counter controlled while loop to calculate the factorial
    while(counter < n){
        ans *= n - counter;
        counter++;
    }
    // printing the output
    cout << "The factorial of 5 is: " << ans << endl;
}