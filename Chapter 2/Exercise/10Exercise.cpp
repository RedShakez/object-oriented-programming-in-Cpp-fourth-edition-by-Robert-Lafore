#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float pounds, shillings, pence;

    cout << "\nEnter amount of pounds: ";
    cin >> pounds;
    cout << "\nEnter amount of shillings: ";
    cin >> shillings;
    cout << "\nEnter amount of pence: ";
    cin >> pence;
    double amount = (pounds * 240 + shillings * 12 + pence);
    amount /= 240;
    cout << "\nyour amount of money in the new balance: £" << setiosflags(ios::fixed) << setprecision(2) << amount << endl;
}