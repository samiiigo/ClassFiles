// Samyog Shrestha ytx16@txstate.edu
// 10/23/2024
// Lab 7 Prelab Assignment

// Move the indicated code into functions.

#include <iostream>
using namespace std;
void welcomeMessage() {
    cout << "Welcome to my fabulous Jedi power level calculator!" << endl
        << "This program will take your age, weight, and" << endl
        << "midichlorean count and return your Jedi power level!"
        << endl << endl;
}

double calculateJediLevel() {
    int age, weight, mcc;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your weight: ";
    cin >> weight;
    cout << "Please enter your midichlorean count: ";
    cin >> mcc;
    return static_cast<double>(mcc * age) / (weight * weight);
}

int main()
{
    double jedi_level;

    // TODO - write a void function to print out to console this welcome message
    welcomeMessage();

    // TODO - write a function that will prompt the user for his/her age,
    // weight, and midicholrean count. Then calculate and return their
    // jedi level (returns a double). Remember to assign the retuned value
    // to the variable 'jedi_level'.
    
    jedi_level = calculateJediLevel();

    // this should remain inside your main function
    cout << "Your Jedi Level is : " << jedi_level;

    return 0;

    }