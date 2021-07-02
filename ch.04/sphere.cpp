// Deitel ch.04 exercise 4.31
// Calculating a sphere's circumference, area and volume

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // declaring pi
    double pi{3.14159};

    // declaring the radius
    double radius{0};

    // setting floating point precision
    cout << setprecision(5) << fixed;

    //prompting the user for the radius
    cout << "Enter radius: ";
    cin >> radius;

    // calculating the circumference
    // declaring C as the circumference
    double c;
    c = 2 * pi * radius;

    // calculating the area
    // declaring area
    double area;
    area = 4 * pi * (radius * radius);
    
    // calculating the volume
    // declaring volume
    double volume;
    volume = ( 4 / 3 ) * pi * (radius * radius * radius);

    // printing the output
    cout << endl; // extra line
    cout << "The Circumference of the sphere is: " << c << endl; 
    cout << "The Area of the sphere is: " << area << endl; 
    cout << "The Volume of the sphere is: " << volume << endl; 
}