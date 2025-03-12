//Samyog Shrestha ytx16@txstate.edu
//10/03/2024
//CS1428 Lab
//Lab 4
//Description: this program will calculate the cost of a TV
//    plan based on user choices.

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    char user_choice, extras;  //user's choice
    double price; //price of monthly package

    // Ask the user for their plan choice:
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;

    // TODO: Use a switch statement to evaluate the total cost of the
    // customer's monthly bill based on the selected plan.

    switch (user_choice){
        case 'A':
        case 'a':
            cout << "Would you like to purchase the sports plan? (Y/N)";
            cin >> extras;

            price = 19.99;

            if (extras == 'y' || extras == 'Y'){
                price+=9.99;
            } else if (extras == 'n' || extras == 'N'){
                price+=0;
            } else {
                cout << "Invalid input, terminating the program " << endl;
                return 1;
            }
            break;

        case 'B':
        case 'b':
            cout << "Would you like to purchase the sports plan? (Y/N)";
            cin >> extras;

            price = 39.99;

            if (extras == 'y' || extras == 'Y'){
                price+=9.99;
            } else if (extras == 'n' || extras == 'N'){
                price+=0;
            } else {
                cout << "Invalid input, terminating the program " << endl;
                return 1;
            }
            break;

        case 'C':
        case 'c':
            price = 45.99;
            break;

        default:
            cout << "Invalid input, terminating the program " << endl;
            return 1;
    }

    cout << "The total price of your monthly package is $" << price << endl;

    // Exit the program:
    return 0;
}