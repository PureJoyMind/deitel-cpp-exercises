// Deitel ch.06 exercise 6.33
// Coin toss simulator


#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<int> randNum(0, 1);

bool flip();

int main(){
    cout << "Coin toss 100 times: \n";
    int heads{0};
    int tails{0};
    int x;
    for(int i{0}; i < 100; i++){
        x = flip();
        (x == 1 ? heads++ : tails++);
    }
    cout << "heads: "<< heads << "\ntails: "<< tails << endl;
}
bool flip(){
    bool coin = randNum(engine);
    return (coin ? true : false);
}