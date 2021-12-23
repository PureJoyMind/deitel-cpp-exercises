// Deitel ch.06 exercise 6.19
// Calculating the hypotenuse of a right triangle
#include <iostream>
#include <cmath>

using namespace std;

double hypo(double, double);

int main(){
    cout << "3 and 4 ==> "<< hypo(3, 4) << endl;
    cout << "5 and 12 ==> "<< hypo(5, 12) << endl;
    cout << "8 and 15 ==> "<< hypo(8, 15) << endl;

}
double hypo(double a, double b)
{
    double hyp{a*a + b*b};
    return sqrt(hyp);
}
