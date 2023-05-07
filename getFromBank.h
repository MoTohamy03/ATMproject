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