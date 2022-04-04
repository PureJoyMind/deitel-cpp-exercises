// Deitel ch.06 exercise 6.31
// Finding the gcd of a number without recursion

#include <iostream>

using namespace std;

int gcd(int, int);

int main(){
    int a{76};
    int b{92};
    cout << "The gcd of "<< a << " and " << b << " is: " << gcd(a, b) << endl;
}

int gcd(int a, int b){
    if(b > a){
        int tmp;
        tmp = b;
        b = a;
        a = tmp;
    }

    int gcd{0};

    for(int i{1}; i <= b; i++){
        if((a % i == 0) && (b % i == 0)){
            gcd = i;
        }
    }

    return gcd;
}