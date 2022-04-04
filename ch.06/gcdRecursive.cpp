// Deitel ch.06 exercise 6.41
// Gcd function with recursion
// This is called the euclidian algorithm

#include <iostream>

using namespace std;

int gcd(int, int);

int main(){
    int a{36};
    int b{80};
    cout << "The gcd of "<< a << " and " << b << " is: " << gcd(a, b) << endl;
}

int gcd(int a, int b){
    if(b > a){
        int tmp{b};
        b = a;
        a = tmp;
    }
    if(a == 0)
        return b;
    
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
