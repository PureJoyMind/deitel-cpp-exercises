// Deitel ch.05 exercise 5.20
// Calculating Pythagorean triples ups to 500
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n{0};// counter for 
    int range;

    cout << "Enter range: ";
    cin >> range;
    for(int a{1}; a <= range; a++){
        for(int b{1}; b <= a; b++){
            for(int c{1}; c <= b; c++){
                //cout << a << b << c << endl;
                if((pow(c ,2)) + pow(b ,2) == pow(a ,2)){
                    n++;
                    cout << a << "\t" << b << "\t" << c << endl;
                }
            }
        }
    }
    cout << "counter: " << n <<endl;
}