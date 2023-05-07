#include <iostream>
using namespace std;

class UserAuthentication {
private:3
  int accountNumber;
  int cardNumbers[6] = {1503, 1607, 1706, 1305, 1204, 2013};

public:
  UserAuthentication() {
    accountNumber = 0;
  }
  UserAuthentication(int account) {
    accountNumber = account;
  }

  bool authenticate(int accountNumber, int accountNumbers[], int size) {
    for (int i = 0; i < size; i++) {
      if (accountNumber == accountNumbers[i]) {
        return true;
      }
    }
    return false;
  }

  void createAccount() {
    int oldPin, newPin;
    cout << "Enter the old PIN: ";
    cin >> oldPin;
    cout << "Enter the new PIN: ";
    cin >> newPin;

    for (int i = 0; i < 6; i++) {
      if (cardNumbers[i] == oldPin) {
        cardNumbers[i] = newPin;
        cout << "The new PIN is: " << cardNumbers[i] << endl;
        return;
      }
    }

    cout << "The old PIN is invalid." << endl;
  }
};
class transferToOther {
private:
    float pinCard, value;
public:
    void transfer(float newvalue, float balance, float pinCardOther) {
        //pinCardForOther x;
        pinCard = pinCardOther;
        value = newvalue;
        //x.balance() + value;
        cout << "You are sent " << value << " to " << pinCardOther << endl;
    }
};
class getFromBank {
private:
    float balance;
    float value;
public:
    float Loan(float newvalue, float newbalance) {
        balance = newbalance;
        value = newvalue;
        balance += value;
        return balance;
    }
};

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
class currency {
private:
    double value;
public:
    double converttoUSD(double newvalue) {
        value = newvalue / 30.27;
        return value;
    }
    double converttoEUR(float newvalue) {
        value = newvalue / 33.94;
        return value;
    }
    double converttoAED(float newvalue) {
        value = newvalue / 8.24;
        return value;
    }
    double converttoBTC(float newvalue) {
        value = newvalue / 874228.67;
        return value;
    }
    double converttoKWD(float newvalue) {
        value = newvalue / 98.83;
        return value;
    }
    double converttoQAR(float newvalue) {
        value = newvalue / 8.31;
        return value;
    }
    
};
class payForCompany {
private:
    int idStu;
    float value;
    string coNam;
public:
    void yourCompany(int id, float newvalue,string name) {
        idStu = id;
        value = newvalue;
        coNam = name;
        cout << "We sent " << value << " to " << name << " by your ID " << idStu << endl;
    }
};
class Chooising {


private:
    string accountType;

public:
    void selectAccountType() {
        cout << "Enter your account type (savings or checking): ";
        cin >> accountType;
    }
    
    void displayAccountType() {
        cout << "You have selected a " << accountType << " account." << endl;
    }

};



int main()
int accountNumbers[] = {1001, 1002, 1003, 1004, 1005};
  int size = 5;
  cout << "Enter your Account Number: ";
  int accountNumber;
  cin >> accountNumber;

  UserAuthentication obj;

  char n;
  cout << "Do you want to use an existing account? [y/n]: ";
  cin >> n;
  if (n == 'y') {
    if (obj.authenticate(accountNumber, accountNumbers, size)) {
      cout << "Account number found." << endl;
    } else {
      cout << "Account number not found." << endl;
    }
  } else if (n == 'n') {
    obj.createAccount();
  }

  Chooising myAccount;
    myAccount.selectAccountType();
    myAccount.displayAccountType(); 



      int typeOperationATM;

        cout << " \n \n \t \t Welcome our good user! \n";
        cout << "choose the type of your operation on ATM \n";
        cout << "\n \t \t \t \tMain Menu \n";
        cout << "\t (1) Balance Inquiry     \t (2) BankAccount  \n";
        cout << "\t (3) Password Change     \t (4) Deposit \n";
        cout << "\t (5) Transfer for other  \t (6) Currency Exchange \n";
        cout << "\t (7) Pay for other       \t (8) Pay off your loan \n";
        cout << "\t (9) Take a loan         \t (10) transfer outside Country \n";

        cout << "\nEnter number of your operation on ATM: ";
        cin >> typeOperationATM;

        if (typeOperationATM == 2) {
            BankAccount obj("hamza ",15000.0);
            obj.withdrow(15000.0);
            obj.payElectricityBill(1000.0);
            obj.payWaterBill(500.0);
            obj.payGasBill(750.0);

        }
        
        

        
        
        else if (typeOperationATM == 5) {
            transferToOther card;
            float pincard, value;
            short x;

            cout << "\n\t \t Transfer for other\n";
            cout << "Enter PIN card for other: ";
            cin >> pincard;
            cout << "Enter value: ";
            cin >> value;
            card.transfer(value, balance, pincard);
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if(x == 1)
                balance -= value;
            cout << "And your Balance = " << balance << endl;
        }

        else if (typeOperationATM == 6) {
            currency card;
            float value;
            int x;
            cout << "\n\t \t Currency Exchange And Withdraw\n";
            cout << "Choose another Currency\n";
            cout << "\t(1)USD    \t (2)EUR"<<endl; // EGP
            cout << "\t(3)AED    \t (4)BTC" << endl;
            cout << "\t(5)KWD    \t (6)QAR" << endl;
            cin >> x;
            cout << "\nEnter Your EGP value: ";
            cin >> value;

            switch (x) {
            case 1:
                cout << "Your " << value << " EGP = " << card.converttoUSD(value) << endl;
                //balance -= card.converttoUSD(value);
                break;
            case 2:
                cout << "Your " << value << " EGP = " << card.converttoEUR(value) << endl;
                //balance -= card.converttoEUR(value);
                break;
            case 3:
                cout << "Your " << value << " EGP = " << card.converttoAED(value) << endl;
                //balance -= card.converttoAED(value);
                break;
            case 4:
                cout << "Your " << value << " EGP = " << card.converttoBTC(value) << endl;
                //balance -= card.converttoBTC(value);
                break;
            case 5:
                cout << "Your " << value << " EGP = " << card.converttoKWD(value) << endl;
                //balance -= card.converttoKWD(value);
                break;
            case 6:
                cout << "Your " << value << " EGP = " << card.converttoQAR(value) << endl;
                //balance -= card.converttoQAR(value);
                break;
            }
            cout << "Your Balance Is " << balance - value << endl;

            // cout << "Your EGP value = ";
        }   
        else if (typeOperationATM == 7) {
            string testString;
            int idNum,x;
            float value;
            payForCompany comPany;

            cout << "\n\t \t Pay For Other\n";
            cout << "Enter Your Company or University Name: ";
            cin.ignore();
            getline(cin, testString);
            cout << "\nEnter Your ID: ";
            cin >> idNum;
            cout << "Enter Your Value to Send to " << testString << ": ";
            cin >> value;
            comPany.yourCompany(idNum,value,testString);
            
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "Okay, ";
                comPany.yourCompany(idNum, value, testString);
                balance -= value;
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }
            cout << "Your balance is " << balance << endl;
        }
        else if (typeOperationATM == 8) {
            int x;
            float value;
            PayForBank card;

            cout << "\n\t \t Pay Off Your Loan To The Bank \n\n";
            cout << "Enter Your Value: ";
            cin >> value;

            cout << "We will take " << value << " from your balance \n";
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "Thanks, We get " << value << " from your balance to Pay Off Your Loan." << endl;
                balance = card.Loan(value, balance);
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }
            
            cout << "Your balance is " << balance << endl;

        }
        else if (typeOperationATM == 9) {
            float value;
            getFromBank card;
            int x;
            // Take a loan from the bank
            cout << "\n\t \t Take A Loan From The Bank \n\n";
            cout << "Enter Your Value: ";
            cin >> value;

            cout << "We will add " << value << " to your balance \n";
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "We Added " << value << " to your balance." << endl;
                balance = card.Loan(value, balance);
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }
            cout << "Your balance is " << balance << endl;
        }
        else if (typeOperationATM == 10) {
            int x,pINCard;
            float value;
            currency card;

            cout << "\n\t \t Transfer Outside The Country \n\n";
            cout << "Enter PIN Card For Other: ";
            cin >> pINCard;

            cout << "Enter Your Value: ";
            cin >> value;
            cout << "You will convert Currency to another or NO?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "Choose another Currency\n";
                cout << "\t(1)USD    \t (2)EUR" << endl; // EGP
                cout << "\t(3)AED    \t (4)BTC" << endl;
                cout << "\t(5)KWD    \t (6)QAR" << endl;
                cin >> x;
                
                switch (x) {
                case 1:
                    cout << "Your " << value << " EGP = " << card.converttoUSD(value) << endl;
                    cout << "We will sent " << card.converttoUSD(value) << " to " << pINCard << endl;
                    break;
                case 2:
                    cout << "Your " << value << " EGP = " << card.converttoEUR(value) << endl;
                    cout << "We will sent " << card.converttoEUR(value) << " to " << pINCard << endl;
                    break;
                case 3:
                    cout << "Your " << value << " EGP = " << card.converttoAED(value) << endl;
                    cout << "We will sent " << card.converttoAED(value) << " to " << pINCard << endl;
                    break;
                case 4:
                    cout << "Your " << value << " EGP = " << card.converttoBTC(value) << endl;
                    cout << "We will sent " << card.converttoBTC(value) << " to " << pINCard << endl;
                    break;
                case 5:
                    cout << "Your " << value << " EGP = " << card.converttoKWD(value) << endl;
                    cout << "We will sent " << card.converttoKWD(value) << " to " << pINCard << endl;
                    break;
                case 6:
                    cout << "Your " << value << " EGP = " << card.converttoQAR(value) << endl;
                    cout << "We will sent " << card.converttoQAR(value) << " to " << pINCard << endl;                    
                    break;
                }
                cout << "We will sent " << value << " to " << pINCard << endl;
                
            }


}
