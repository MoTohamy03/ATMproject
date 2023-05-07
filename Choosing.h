#include<iostream>
using namespace std ;
#include<string> 

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
