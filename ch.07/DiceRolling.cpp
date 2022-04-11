// Deitel ch.06 exercise 7.16
// Simulating the rolling of two dice 36.000.00 times
#include <iostream>
#include <array>
#include <iomanip>
#include <random>

using namespace std;

default_random_engine eng{static_cast<unsigned int>(time(0))};
uniform_int_distribution<unsigned int> randInt{1, 6};

int main(){
    array<unsigned int, 13> dice{};

    unsigned int d1{0}, d2{0};

    unsigned int sum{0};

    for (int i{1}; i <= 36'000'000; i++){
        d1 = randInt(eng);
        d2 = randInt(eng);
        sum = d1 + d2;

        ++dice[sum];
    }

    cout << "The results are:" << endl;
    for(int i{2}; i < 13; i++){
        if(i > 9)
            cout << i << ':' << setw(9) << dice[i] <<endl;    
        else
            cout << i << ':' << setw(10) << dice[i] <<endl;
    }
}
