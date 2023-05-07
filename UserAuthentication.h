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
