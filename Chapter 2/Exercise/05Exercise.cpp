//05Exercise.cpp
//allows the user to choose a letter and the program then decides wheither its a zero or nonzero 
#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace  std;

int main()
{
    char charvar1;

    cout << "Enter a letter: ";
    cin >> charvar1;
    cout << islower(charvar1) << endl << endl;
    return 0;
}