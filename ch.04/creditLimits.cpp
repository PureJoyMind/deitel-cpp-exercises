// Deitel ch.04 exercise 4.14
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Declaring variables
    int accNum{0};
    float initBalance{0};
    float totalCharge{0};
    float totalCredit{0};
    float creditLimit{0};
    float newBalance{0};

    // getting account number in order to
    // have a cons=dition for the while loop
    cout <<" Enter Account Number: (-1 to Exit): ";
    cin  >> accNum;

    // setting floating point precision
    cout << setprecision(2)<<fixed;

    //while loop initiation
    while (accNum != -1){
        // prompting user for each variable
        cout << "Enter Beginning Balance: ";
        cin >> initBalance;
        cout << "Enter Total Charges: ";
        cin >> totalCharge;
        cout << "Enter Total Credits: ";
        cin >> totalCredit; 
        cout << "Enter Credit Limit:  ";
        cin >> creditLimit;

        // calculating and displaying the new balance
        newBalance = (initBalance + totalCharge) - totalCredit;
        cout << "New Balance is: "<< newBalance<<endl;

        // checking the credit limit
        if (newBalance > creditLimit){
            cout << "Account:       "<<accNum<<endl;
            cout << "Credit Limit:  "<< creditLimit<<endl;
            cout << "Balance:       "<<newBalance<<endl;
            cout << "Credit Limit Exeeded."<<endl;
        }
        cout <<" Enter Account Number: (-1 to Exit): ";
        cin  >> accNum;
    }
}