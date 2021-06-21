// Deitel ch.03 exercise 3.10
// Invoice class
#include <string>

class Invoice{
public:
  // constructor initializes the first four variables
  // using parameters and the rest with set numbers
  Invoice (std::string number, std::string description, int quantity, int ppi)
    : partNumber{number}, description{description}, quantity{quantity},ppi{ppi},
    vat{0.20},discount{0}{}

  // calculating the invoice amount
  double getInvoiceAmount(){
    double amount;
    amount = quantity * ppi;
    double dis;
    dis = 100 - discount;
    double disApplied;
    disApplied = (amount * dis)/ 100;
    double taxx;
    taxx = vat + 100;
    double taxApplied;
    taxApplied = disApplied / taxx;
    return taxApplied;
  }

  // set and get functions for each variable
  // part number:
  void setNumber(std::string partNum){
    partNumber = partNum;
  }
  std::string getNumber() const {
    return partNumber;
  }

  // part description
  void setDescription(std::string descrpt){
    description = descrpt;
  }
  std::string getDescription() const {
    return description;
  }

  // the quantity of the item
  void setQuantity(int quan){
    if (quan >= 0){
      quantity = quan;
    }
  }
  int getQuantity() const{
    return quantity;
  }

  // price per Item
  void setPrice(int price){
    if (price >= 0){
      ppi = price;
    }
  }
  int getPrice() const {
    return ppi;
  }

  // value added tax
  void setVat(double value){
    if(value >= 0){
      vat = value;
    }
  }
  double getVat() const{
    return vat;
  }

  // discount
  void setDiscount(double percent){
    if(percent >=0 && percent <= 100){
      discount = percent;
    }
  }
  double getDiscount() const {
    return discount;
  }

private:
  // part number and part description
  std::string partNumber, description;
  // a quantity of the item being purchased
  int quantity;
  // price per Item
  int ppi;
  // value-added tax
  double vat;
  // discount rate
  double discount;
};
