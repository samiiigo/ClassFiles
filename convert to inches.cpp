// Samyog Shrestha, ytx16@txstate.edu
// No collaborators
// LAB 1.19

#include <iostream>
using namespace std;

int main()
{

    int yards;
    int feets;
    int inches;
    int totalFeets;
    int totalInches;

    cout << "Input: " << endl;
    cin >> yards >> feets >> inches;
    cout << endl;

    totalFeets = (yards * 3) + feets;
    totalInches = totalFeets * 12 + inches;

    cout << "Inches: " << totalInches << endl;

    return 0;
}
