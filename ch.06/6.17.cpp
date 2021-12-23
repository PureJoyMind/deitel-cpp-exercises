// https://stackoverflow.com/questions/2443316/c-random-number-from-a-set
// Deitel ch.06 exercise 6.17
// Finding a random number from a set
// a) 0, 3, 6, 9, 12
// b) 3, 5, 7, 9, 11, 13
// c) 6, 10, 14, 18

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    // Looked online this is what I found(the link to te question on line 1)
    cout << ((int[]) {0, 3, 6, 9, 12})[rand() % 5] << endl;
}

