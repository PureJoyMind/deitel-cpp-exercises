// Deitel ch.04 exercise 4.33
// determining whether three numbers are sides of a triangle
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // declaring the sides
    double side1{1}, side2{1}, side3{1};

    // prompting the user to enter the sides
    cout << "Enter 3 non-zero numbers: "<< endl;
    cin >> side1 >> side2 >> side3;

    // the sum of two sides must be bigger than the third side
    if (((side1 + side2) > side3) && ((side3 + side2) > side1) && ((side1 + side3) > side2)){
        cout << "Yes this is a triangle." << endl;
    }
    else{
        cout << "No this is not a triangle." << endl;
    }
}
