//Samyog Shrestha ytx16@txstate.edu
//10/10/2024
//CS1428 Lab
//Lab 6
//Description: this program will perform some operations on the digits of a number

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
// ADD OTHER LIBRARIES AS REQUIRED HERE

using namespace std;

int main()
{
    char ans = 'y';

    // TODO: Compute the sum of digits and
    // the factorial of the highest digit:

    while(ans == 'Y' || ans == 'y'){
        int number;

        //get input
        while (true){
            cout << endl << "Enter a number (5 - 20): ";
            cin >> number;
            if (number>=5 && number<=20){
                break;
            } else {
                cout << "Error: Invalid input.";
            }
        }

        int num = number;
        long long factorial = 1;

        while (number >= 1){
            factorial  *= number;
            number--;
        }

        cout << num << "! = ";

        int i = 1;
        while (num > i){
            cout << i << " x ";
            i++;
        }
        cout << num << " = " << factorial << endl;

        long long factorial_ = factorial;
        int  even_sum = 0, odd_sum = 0;

        while (factorial > 0 ) {
            int num_ = factorial % 10;
            if (num_ % 2 == 0){
                even_sum += num_;
            } else {
                odd_sum += num_;
            }
            factorial /= 10;

        }
        cout << "Sum of even digits of " << factorial_ << " = " << even_sum << endl;
        cout << "Sum of odd digits of " << factorial_ << " = " << odd_sum << endl;

        while (true){
            cout << endl<< "Do you want to continue (y/n)?";
            cin >> ans;
            if (ans == 'Y' || ans == 'y' || ans == 'N' || ans == 'n') {
                break;
            } else {
                cout << "Error: Invalid input." << endl;
            }
        }
    }

    cout << "Have a great day!!!" << endl;

    return 0;
}

