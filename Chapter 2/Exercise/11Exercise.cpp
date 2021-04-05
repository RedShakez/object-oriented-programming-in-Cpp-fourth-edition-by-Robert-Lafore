//11Exercise.cpp
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    setiosflags(ios::left);

    cout << setw(8) << "Last name" << setw(12)
         << setw(12) << "First name" << setw(12)
         << setw(16) << "Street address" << setw(12)
         << setw(7) << "Town" << setw(12)
         << setw(11) << "State" << setw(12) << endl
         << setw(8) << "----------------------------------------------------------" << endl
         << "Jones" << setw(12)
         << setw(13) << "Bernard" << setw(12)
         << setw(15) << "109 Pine Lane" << setw(12)
         << "Littletown" << setw(12)
         << setw(8) <<"Mi" << setw(12);
}