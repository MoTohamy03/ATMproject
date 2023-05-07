
#include<iostream>
using namespace std ;


class BankAccount {
    private:
      string HouderName ; 
      double   balance = 20000;  // how make it change 
      double ammount ; 
    public :
    /// after counsteractor and setter & getter 
       BankAccount (string name , double d ):ammount(d),HouderName(name ){}

       void withdrow(double ammount ){
           if (ammount <=  balance )
           {
             balance -= ammount ; 
             cout << "the new balance is "<< balance << "$" ; 
           }    
       }
       void payElectricityBill(double amount) {
      if (amount <= balance) {
        balance -= amount;
        cout << "Electricity bill payment successful. New balance is: $" << balance << endl;
      } else {
        cout << "Insufficient funds. Electricity bill payment rejected." << endl;
      }
    }
    
    void payWaterBill(double amount) {
      if (amount <= balance) {
        balance -= amount;
        cout << "Water bill payment successful. New balance is: $" << balance << endl;
      } else {
        cout << "Insufficient funds. Water bill payment rejected." << endl;
      }
    }
    void payGasBill(double amount) {
      if (amount <= balance) {
        balance -= amount;
        cout << "Gas bill payment successful. New balance is: $" << balance << endl;
      } else {
        cout << "Insufficient funds. Gas bill payment rejected." << endl;
      }
    }
       // comblete the new idea 

};

int main(){
    BankAccount obj("hamza ",15000.0);
    obj.withdrow(15000.0);
    obj.payElectricityBill(1000.0);
    obj.payWaterBill(500.0);
    obj.payGasBill(750.0);

}