#include<iostream>
using namespace std ;
#include <UserAuthentication.h>
#include <Chooising.h>
#include<BankAccount.h>
#include<transferToOther.h>
#include<currency.h>
#include<payForCompany.h>
#include<getFromBank.h>

int main(){
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
