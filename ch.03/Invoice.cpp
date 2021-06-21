// Deitel ch.03 exercise 3.10
// driver program for the invoice class
#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

// function to remove repeated code
void displayItem(Invoice Item){
  cout << "your total invoice is: "<< Item.getInvoiceAmount()<<endl;
  cout << "your drive number is: "<< Item.getNumber()<<endl;
  cout << "your device description is: " << Item.getDescription()<<endl;
  cout << "your device quantity is: "<< Item.getQuantity()<<endl;
  cout << "your device Price per Item is: "<< Item.getPrice()<<endl;
  cout << "your device Value added Tax: "<< Item.getVat()<<endl;
  cout << "you have "<< Item.getDiscount() << " percent dicount!"<<endl;
}

int main(){
  // defining Invoice objrct Flash
  Invoice Flash{"1102","Hard Drive",6, 24};
  displayItem(Flash);

// looping the program
while(true){
  // asking for a change in anything
  cout << "would you like to change anything?\nWhat is it? "<< endl;
  cout << "1.number 2.description 3.quantity\n";
  cout << "4.price  5.tax         6.discount\n";
  char ans;
  cin >> ans;
// using a switch statement to validate answer and change accordingly
  string inps;
  double inpd;
  switch (ans) {
    case '1':
    cout << "Enter amount: \n";
    cin >> inps;
    Flash.setNumber(inps);
    break;
    case '2':
    cout << "Enter amount: \n";
    cin >> inps;
    Flash.setDescription(inps);
    break;
    case '3':
    cout << "Enter amount: \n";
    cin >> inpd;
    Flash.setQuantity(inpd);
    break;
    case '4':
    cout << "Enter amount: \n";
    cin >> inpd;
    Flash.setPrice(inpd);
    break;
    case '5':
    cout << "Enter amount: \n";
    cin >> inpd;
    Flash.setVat(inpd);
    break;
    case '6':
    cout << "Enter amount: \n";
    cin >> inpd;
    Flash.setDiscount(inpd);
    break;
  }

  displayItem(Flash);

  // loophole
  cout << "Are you finished? \n";
  char end;
  cin >> end;
  if (end == 'y'){
    break;
  }
 }
}
