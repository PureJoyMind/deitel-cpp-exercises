// Deitel ch.04 exercise 4.15
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // declaring variable
    float hours{0};
    // each employee gets 2 hours of leave per week
    float leaveHours{2};

    // prompting the user for sentinel
    cout << "Enter number of hours worked (-1 to end): ";
    cin >> hours;
    
    // setting the floating point precision
    cout << setprecision(2)<<fixed;

    while (hours != -1){
        // adding the 10% of total hours to the accrued leave
        leaveHours += ((hours * 10) / 100);

        cout<<"Accrued leave: "<<leaveHours<<" hours"<<endl;

        //reseting leaveHours to 2 for the nest employee
        leaveHours = 2;

        // getting the sentinel value again
        cout << "Enter number of hours worked (-1 to end): ";
        cin >> hours;
    }
}