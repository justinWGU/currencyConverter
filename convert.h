#ifndef CONVERTH
#define CONVERTH
#include <iostream>
using namespace std;

double GetCurrentExchangeRate (string fromCurrency, string toCurrency);

double ConvertCurrency (double currencyAmount, double exchangeRate);

#endif