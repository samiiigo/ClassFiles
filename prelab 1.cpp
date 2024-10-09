// Samyog Shrestha ytx16@txstate.edu
// 09/12/2024
// Pre-Lab 1 Assignment

// Copy and Paste this code into your IDE and complete the requested items.

#include <iostream>
using namespace std;

int main()
{
    // 1.
    // There are a several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to x and y.
    // The program should then print j to the power of 5 and i / 95

    int j;
    int i;

    cout << "Enter the value for j: " << endl;
    cin >> j;

    cout << "Enter the value for i: " << endl;
    cin >> i;

    j = j * j * j * j * j;
    cout << "j to the power of 5 = " << j << endl;

    i = i / 95;
    cout << "i / 95 = " << i << endl;

    // 2.
    // Write code that takes the number of pounds the user
    // can lift (use cin), divides that number by 2.20462, and then
    // prints it to the screen. This will convert pounds to kg.
    // (200 pounds is equal to 90.7186 kilograms)

    double userPounds = 0;
    double userKilograms = 0;

    cout << "Many pounds can you lift?" << endl;
    cin >> userPounds;

    userKilograms = userPounds / 2.20462;

    cout << "You can lift " << userKilograms << " kilograms." << endl;

    return 0;
}