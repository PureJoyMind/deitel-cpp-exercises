// Deitel ch.06 exercise 6.28
// A dudeney number is a number which its
// Cube root equals the sum of its digits.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isDudeney(int);
int digitSum(int);

int main(){
    for(unsigned long long i{1}; i < 1'000'000'000; i++){
        if(isDudeney(i)){
            cout << i << " is Dudeney."<<endl;
            cout << cbrt(i) << " \tcube root" <<endl;
            cout << digitSum(i) << " \tdigit sum\n"<<endl;
        }
    }
}
int digitSum(int n){
    int sum{0},m;    
    while(n>0)    
    {    
    m = n % 10;    
    sum += m;    
    n = static_cast<int>(n / 10);    
    }    
    return sum;
}

bool isDudeney(int a){
    
    if(int(cbrt(a)) * int(cbrt(a)) * int(cbrt(a)) != a)
        return false;
    if(int(cbrt(a)) == (digitSum(a))){
        return true;
    }
    return false;
}