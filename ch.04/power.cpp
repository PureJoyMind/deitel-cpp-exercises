// Deitel ch.04 exercise 4.8
#include <iostream>

using namespace std;

int main(){
    unsigned int x;
    unsigned int y;
    cout << "enter x:\n";
    cin >> x;
    cout << "raised by y:\n";
    cin >>y;

    unsigned int i{1};
    unsigned int power{1};

    while(i <= y){
        power *= x;
        ++i;
    }
    cout << x <<" raised by "<<y;
    cout <<" is: "<< power<<endl;
}