// Deitel ch.06 exercise 6.38

#include <iostream>
#include <cmath>

using namespace std;

int minimum(int);
void hanoi(int, char, char, char);

int main(){
// Defining pegs
char src{'1'}, aux{'2'}, dst{'3'};
int disks{0};

cout << " Enter the number of disks: ";
cin >> disks;

cout << " It takes the minimum of " << minimum(disks) << " moves to move all disks from peg 1 to 3!\n";
hanoi(disks, src, dst, aux);
}

int minimum(int n)// Calculating the minimum number of moves
{
    return (pow(2, n) - 1);
}

void hanoi(int disks, char src, char dst, char aux)// Function to print the solution
{
    if( disks == 1)// If there is 1 disk
    {
        cout << ' ' << src << " --> " << dst << endl;
    }
    // The goal is basically moving the Nth disk to dst-peg
    // To do so, we move all other disks(n-1) to aux-peg
    else{
        hanoi(disks - 1, src, aux, dst);// Moving n-1 to aux
        cout << ' ' << src << " --> " << dst << endl;// moving N to dst
        hanoi(disks - 1, aux, dst, src);// Moving n-1 to dst
    }
}