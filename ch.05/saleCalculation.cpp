// Deitel ch.05 exercise 5.17
// Product retail prices:
// 1: $2.98, 2: $4.50, 3: $9.98, 4: $4.49, 5: $6.87
#include <iostream>

using namespace std;

int main(){
    int productNum{1};// Product number
    int quantity;// The quantity of the entered product 
    double purchase;// Total retailed 
    int one{298}, two{450}, three{998}, four{449}, five{687};// Product prices * 100 for precise calculation

    cout << "Enter product number: ";
    cin >> productNum;// Getting value for the start of the loop
    while(productNum != -1)// Looping the prices and quantity
    {
        cout << "Enter the quantity of the selected product: ";
        cin >> quantity;// Getting the quantity of the selected product
        switch (productNum)// using switch for the selected product
        // adding the product of the quantity and the price of the selected
        // product to the total retail variable
        {
        case 1:
            purchase += one * quantity;
            break;
        case 2:
            purchase += two * quantity;
            break;
        case 3:
            purchase += three * quantity;
            break;
        case 4:
            purchase += four * quantity;
            break;
        case 5:
            purchase += five * quantity;
            break;
        default:
            break;
        }
        cout << "Enter product number: (ENTER -1 TO EXIT) ";
        cin >> productNum;// Getting the product number again for next loop
    }
    cout << "The total retail value of the products is: " << purchase / 100 << endl;
}