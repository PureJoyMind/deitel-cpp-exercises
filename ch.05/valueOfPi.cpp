// Deitel ch.05 exercise 5.19
// Calculating the value of Pi
// pi = 4 - (4/3) + (4/5) - (4/7) + ...
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setprecision(35) << fixed;
    double pi{4};// Initial value of 4
    int counter{2};// Initial value of 2
    int limit;// Limit of calculating the infinite series
    int denom{3};// Denominator
    cout << "Enter loop limit: ";
    cin >>  limit;
    while(counter <= limit){// Looping till reaching the limit
        if(counter % 2 == 0)// If counter was even reduce from pi
        {
            pi -= 4.0 / denom;
        }
        else// If counter was odd add to pi
        {
            pi += 4.0 / denom;
        }
        /* cout << "Pi is: " << pi << endl; */
        denom += 2;// Add 2 to denominator 
        counter++;// Add 1 to counter
    }
    cout << pi << endl;

}
