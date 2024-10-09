// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 2.25.1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long phoneNumber;

    cin >> phoneNumber;

    int firstThreeDigit = phoneNumber / 10000000;
    int secondThreeDigit = (phoneNumber % 10000000) / 10000;
    int lastFourDigit = (phoneNumber % 10000);

    cout << "(" << firstThreeDigit << ") ";
    cout << secondThreeDigit << "-";
    cout << lastFourDigit << endl;

    return 0;
}