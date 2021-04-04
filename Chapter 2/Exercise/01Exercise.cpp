//01Exercise.cpp
//allows the user to enter the number of gallons, and then displays the equivlent in cubic feet
#include <iostream>
using namespace std;

int main()
{
    int gallons; //for amount of gallons

    cout << "Enter the amount of gallons you put in: ";
    cin >> gallons;
    float cfeet = gallons * 0.133681;
    cout << "Equivalent in Cubic Feet is: " << cfeet << endl;
}