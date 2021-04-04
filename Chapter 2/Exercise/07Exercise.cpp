//07Exercise.cpp
//lets you convert Celcius to Farenheit
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float ctemp;

    cout << "Enter tempature in Celcius: ";
    cin >> ctemp;
    float ftemp = (ctemp * 1.8) + 32;
    cout << "Equivalent in Farenheit is: " << ftemp << endl;
    return 0;
}