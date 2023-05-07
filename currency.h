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
