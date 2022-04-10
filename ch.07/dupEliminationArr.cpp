// Deitel ch.06 exercise 7.13
// Duplicate elimination with array

#include <iostream>
#include <array>
#include <algorithm>// binary_search() and sort() functions

using namespace std;

int main(){
	const size_t arrSize{20}; 
	array<int, arrSize> numbers{};
	
	cout << " Input 20 numbers between 10 and 100: \n";
	
	int tmp{0}; // tmp value to validate before adding to array

	for(int i{0}; i < arrSize; i++){
		cin >> tmp;
		while( tmp < 10 || tmp > 100 ){
			cout << " Out of bounds! Try again: \n";
			cin >> tmp;
		}
		sort(numbers.begin(), numbers.end()); // Sorting before searching
		if( binary_search( numbers.begin(), numbers.end(), tmp) ){
			cout << " duplicate!\n"; 
			continue;
		}
		numbers[i] = tmp;
	}

	cout << " The entered numbers are: \n";
	for(int& i : numbers){
		if ( i == 0)
			continue;
		cout << i << ' ';
	}
	cout << endl;
}

void validation(array<int, arrSize>& n, int i){
	
}
