//fahren.cpp
//demonstrates cin, newline
#include <iostream>
using namespace std;

int main()
{
    int ftemp;          //for temperature in fahrenheit

    cout << "Enter temperature in fahrenheit: ";    //input
    cin >> ftemp;       //line to tell the program to wait for the user to put in the tempature 
    int ctemp =(ftemp - 32) * 5 / 9;    //equation to get Fahrenheit to Celsius
    cout << "Equivalent in Celsius is: " << ctemp << '\n';  //output
    return 0;
}