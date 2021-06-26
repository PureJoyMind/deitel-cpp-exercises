// Deitel ch.04 exercise 4.16
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // declaring variables
    int laps{0};
    float contribution{0}, sponsorAmount{0}, totalContribution{0};
    // bonus amount is for laps more than 40
    float bonusSponsor{0};
    // declaring the counter
    int counter{1};

    // setting floating point precision 
    cout << setprecision(2)<<fixed;

    // prompting user to enter the amount of laps
    // and reminding of the sentinel
    cout << "Enter laps completed (-1 to end): ";
    cin >> laps;

    while (laps != -1){ // while loop for each student
        // prompting user for the sponsor amount
        cout << "Enter sponsorship rater: ";
        cin >> sponsorAmount;

        // calculating bonus sponsor
        bonusSponsor = sponsorAmount + ((sponsorAmount * 50) / 100);

        while (counter <= laps){ // while loop for each lap of a student
            if (counter > 40){ // condition for laps more than 40
                contribution += bonusSponsor;
            }
            else{
                contribution += sponsorAmount;
            }
            // adding to the counter
            counter++;
        }
        
        // adding the contribution amount to the total contribution
        totalContribution += contribution;

        // printing the amount of contribution for the student
        cout << "Student contribution is: "<< contribution << endl;

        // resetting contribution and counter for the next student
        contribution = 0;
        counter = 1;

        // prompting user to enter the amount of laps
        // and reminding of the sentinel
        cout << "Enter laps completed (-1 to end): ";
        cin >> laps;
    }
    // after the user is done print the total contribution amount
    cout << "Total funds raised: "<< totalContribution << endl;
}