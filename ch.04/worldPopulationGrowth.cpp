// Deitel ch.04 exercise 4.38
// accoring to "www.worldometers.info" the current
// world population is %1.05
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // declaring current year
    float currentYear{2020};
    // declaring the growth rate
    float rate{1.05};

    // setting floating point precision
    cout << setprecision(3)<<fixed;

// printing out the next 10 years to keep it small
    // using a counter-controlled while loop
    int count{10};
    while(count > 0){
        cout << static_cast<int>(currentYear) << "\t";
        currentYear++;
        count--;
    }
    cout << endl;

// printing out the anticipated population
    // declaring the current population
    float currentPop{81};
    // declaring the anticipated population
    float popResult;

    // using counter controlled while loop to claculate
    count = 10;
    while (count > 0){
        // calculating the percentage
        popResult = currentPop + ((currentPop * rate)/100);
        cout << popResult << "\t";
        currentPop = popResult;
        count--;
    }
    cout << endl;
}