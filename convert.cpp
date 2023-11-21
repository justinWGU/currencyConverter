#include <iostream>
using namespace std;

int main () {}

double GetCurrentExchangeRate (string fromCurrency, string toCurrency) {
    cout << "Finish Me" << endl;

    return 0.0; // returns exchange rate
}

double ConvertCurrency (double currencyAmount, double exchangeRate) {
    double cnvrtdCurrency;
    cnvrtdCurrency = currencyAmount * exchangeRate;
    
    return cnvrtdCurrency;
}