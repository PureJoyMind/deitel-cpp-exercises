// Deitel ch.06 exercise 7.13
// Duplicate elimination with array

#include <iostream>
#include <array>
#include <algorithm> // binary_search() and sort() functions

using namespace std;

const size_t arrSize{20};// Array size

bool search( array<int, arrSize>& , int );

int main()
{
	array<int, arrSize> num{};
	int tmp{0};// To get user input and if validated add to array

	cout << "Enter 20 numbers between 10 & 100:\n";

	bool srch{false};// Variable to hold search answer

	for (int i{0}; i < arrSize; i++)// Looping the array
	{
		cin >> tmp;
		while (tmp > 100 || tmp < 10)// Bounds checking
		{
			cout << "Out of bounds: \n";
			cin >> tmp;
		}

		srch = search(num, tmp);// Searching user input in array, true if found
		if (srch)
		{
			cout << "duplicate\n";
			continue;// If duplicate was found jump to next index
		}

		num[i] = tmp;// If no duplicate existed add to array

	}

	sort ( num.begin(), num.end() );

	cout << "The entered numbers are:\n";
	for (int i{0}; i < arrSize; i++)
	{
		if( num[i] != 0)
			cout << num[i] << ' ';
	}
	cout << endl;
}

bool search(array<int, arrSize>& n, int a){
	for(int i : n){
		if ( i == a )
			return true;
	}
	return false;
}