/*Write a program with total change amount as an integer input that outputs the change using the fewest coins, one coin type per line. The coin types are quarters, dimes, nickels, and pennies. A quarter is 25 cents, a dime is 10 cents, a nickel is 5 cents, and a penny is 1 cent. Use singular and plural coin names as appropriate, like 1 penny vs. 2 pennies.

Ex: If the input is:

0 
or less, the output is:

no change
Ex: If the input is:

45
the output is:

1 quarter
2 dimes 
Your program must define and call the following function. The parameters should return the number of quarters, dimes, nickels, and pennies.
void ExactChange(int userTotal, int &quarters, int &dimes, int &nickels, int &pennies)*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 5.16.1

#include <iostream>
using namespace std;

//*****************************************************************************
// ExactChange: calculate the number of quarters, dimes, nickels, and pennies 
// needed for the change amount
// userTotal: The amount of money in cents.
// quarters: The number of quarters.
// dimes: The number of dimes.
// nickels: The number of nickels.
// pennies: The number of pennies.
//*****************************************************************************

void ExactChange(int userTotal, int &quarters, int &dimes, int &nickels, int &pennies){
    quarters = userTotal / 25;
    userTotal = userTotal % 25;
    dimes = userTotal / 10;  
    userTotal = userTotal % 10;
    nickels = userTotal / 5;
    userTotal = userTotal % 5;
    pennies = userTotal;
}

int main() {
    int inputVal;
    int quarters, dimes, nickels, pennies;

    cin >> inputVal;

    if (inputVal <= 0){
        cout << "no change" << endl;
    } else {
        ExactChange(inputVal, quarters, dimes, nickels, pennies);

        if  (quarters > 0){
            if (quarters == 1){
                cout << quarters << " quarter" << endl;
            } else {
                cout << quarters << " quarters" << endl;
            }
        }

        if  (dimes > 0){
            if (dimes == 1){
                cout << dimes << " dime" << endl;
            } else {    
                cout << dimes << " dimes" << endl;
            }
        }
        if  (nickels > 0){
            if (nickels == 1){
                cout << nickels << " nickel" << endl;
            } else {
                cout << nickels << " nickels" << endl;
            }
        }

        if (pennies > 0){
            if (pennies == 1){
                cout << pennies << " penny" << endl;
            } else {
                cout << pennies << " pennies" << endl;
            }
        }
    }

    return 0;
}