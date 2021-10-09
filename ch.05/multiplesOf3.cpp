// Deitel ch.05 exercise 5.12
// Calculating the product of the multiples of 3
#include <iostream>

using namespace std;

int main(){
    int64_t product{1};

    for(int i{3}; i <= 50; i++){
        if (i % 3 == 0)
        {
            product *= i;
        }
        
    }
    cout << "The product of multiples of 3 is: " << product << endl; 
}
