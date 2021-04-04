//06Exercise.cpp
//write a program that allows the user to enter an amount in dollars and then displays this value converted 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float usdollar;

    cout << "Enter an US dollar amount: ";
    cin >> usdollar;
    float pound = (usdollar * 1.487);
    float franc = (usdollar * 0.172);
    float deutschemark = (usdollar * 0.584);
    float yen = (usdollar * 0.0095);
    cout << "Exchange Rates" << endl
         << "pounds: " << pound << endl
         << "franc: " << franc << endl
         << "deutschemark: " << deutschemark << endl
         << "yen: " << yen << endl;
    return 0;
}