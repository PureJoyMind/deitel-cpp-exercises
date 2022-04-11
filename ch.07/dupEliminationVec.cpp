// Deitel ch.06 exercise 7.13
// Duplicate elimination with array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool searchVec(vector<int> &, int);

int main()
{
    vector<int> num;
    int tmp{0}; // To get user input and if validated add to array

    cout << "Enter 20 numbers between 10 & 100:\n";

    bool srch{false}; // Variable to hold search answer

    for (int i{0}; i < 20; i++) // Looping the array
    {
        cin >> tmp;
        while (tmp > 100 || tmp < 10) // Bounds checking
        {
            cout << "Out of bounds: \n";
            cin >> tmp;
        }

        srch = searchVec(num, tmp); // Searching user input in array, true if found
        if (srch)
        {
            cout << "duplicate\n";
            continue; // If duplicate was found jump to next index
        }

        num.push_back(tmp); // If no duplicate existed add to array
    }

    sort(num.begin(), num.end());

    cout << "The entered numbers are:\n";
    for (int i{0}; i < num.size(); i++)
    {
        cout << num[i] << ' ';
    }
    cout << endl;
}

bool searchVec(vector<int> &n, int a)
{
    for (int i : n)
    {
        if (i == a)
            return true;
    }
    return false;
}
