// Deitel ch.03 exercise 3.17
// electric bill class
#include <string>

class ElectricBill{
public:
  // initialization
  explicit ElectricBill(double amount)
   {
    if (amount < 0){
      amountPaid = 0;
    }
    else{
      amountPaid = amount;
    }
  }
// set and get functions
  void setAmount(double amount){
    if (amount < 0){
      amountPaid = 0;
    }
    else{
      amountPaid = amount;
    }
  }
  double getAmount() const{
    return amountPaid;
  }
// calculating vat 
  double vat(double amount){
    double tax;
    tax = amount / (1 + 0.18);
    return tax;
  }

private:
  double amountPaid;
};
