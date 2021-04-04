//08Exercise.cpp
//input two fractions and the program will add them together
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, numerator, denomonator;
    char dc;

    cout << "Enter your first fraction: ";
    cin >> a  >> dc >> b;
    cout << "Enter your second fraction: ";
    cin >> c >> dc >> d;
    numerator = (a * d) + (c * b);
    denomonator = d * b;
    cout << "the sum of these two fractions: " << numerator << '/' << denomonator << '\n';
    return 0;
}