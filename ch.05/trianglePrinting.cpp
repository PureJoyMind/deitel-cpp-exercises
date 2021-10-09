// Deitel ch.05 exercise 5.15
// Triangle patterns
#include <iostream>

using namespace std;

int main(){
    // (a)
     
    for(int i{0};i < 10; i++)// Printing 10 lines
    {
        for(int j{1}; j <= 10; j++)// Printing asteriks
        {
            if (j <= i){
                cout << "*";
            }
            else{
                continue;
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // (b)
    
    for(int i{10};i > 0; i--)// Printing 10 lines
    {
        for(int j{10}; j >= 1; j--)// Printing asteriks
        {
            if (j <= i){
                cout << "*";
            }
            else{
                continue;
            }
        }
        cout << "\n";
    }
    cout << "\n";
    
    // (c)
    
    for(int i{10};i > 0; i--)// Printing 10 lines
    {
        for(int j{10}; j >= 1; j--)// Printing asteriks
        {
            if (j <= i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    cout << "\n";
    // (d)

    for(int i{10};i > 0; i--)// Printing 10 lines
    {
        for(int j{1}; j <= 10; j++)// Printing asteriks
        {
            if (j >= i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }

}