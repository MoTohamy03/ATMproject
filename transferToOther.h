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