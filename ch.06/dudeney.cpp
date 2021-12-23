// Deitel ch.06 exercise 6.28
#include <iostream>
#include <cmath>

using namespace std;

bool isDudeney(int);
int digitSum(int);

int main(){
    for(unsigned long long i{1}; i < 1000000; i++){
        if(isDudeney(i))
            cout << i << " is Dudeney."<<endl;
    }

    int x{4913};
    cout << cbrt(x) <<" cube root" <<endl;
    cout << digitSum(x) << " digit sum"<<endl;

    if(isDudeney(x) == true)
        cout << "yes its dudeney." << endl;
    else{
        cout << "nope." << endl;
        }
}

int digitSum(int n){
    int sum{0},m;    
    while(n>0)    
    {    
    m = n % 10;    
    sum = sum + m;    
    n = n / 10;    
    }    
    return sum;
}

bool isDudeney(int a){
    double x{cbrt(a)}, y{digitSum(a)};
    if(x == y){
        return true;
    }
    return false;
}