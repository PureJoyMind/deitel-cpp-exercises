// Deitel ch.04 exercise 4.34
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

    // calculating the square of each side 
    // declarin each sides square
    double side1Square, side2Square, side3Square;
    side1Square = side1 * side1;
    side2Square = side2 * side2;
    side3Square = side3 * side3;

    // the sum of two sides' square must be equal to the square of the third side
    if (side3Square == (side1Square + side2Square)){
        cout << "Yes this is a right triangle." << endl;
    }
    else if (side2Square == (side1Square + side3Square)){
        cout << "Yes this is a right triangle." << endl;
    }
    else if(side1Square == (side3Square + side2Square)){
        cout << "Yes this is a right triangle." << endl;
    }
    
    else {
        cout << "No this is not a right triangle." << endl;
    }
}
