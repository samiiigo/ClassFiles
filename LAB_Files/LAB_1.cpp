//Samyog Shrestha ytx16
//09/12/2024
//CS1428 Lab
//Lab 1
//Description: this program will calculate a user's BMI

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string name;
    double weight;
    double height;
    double bmi;

    cout << "What is your name?" << endl;
    cin >> name;

    cout << "What is your total weight (lbs.)?" << endl;
    cin >> weight;
    cout << "What is your height (inches) [1 foot = 12 inches]?" << endl ;
    cin >> height;

    bmi = (weight / (height*height) * 703);

    cout << fixed << setprecision(2) << name <<"\'s BMI is " << bmi << endl;

    return 0;
}