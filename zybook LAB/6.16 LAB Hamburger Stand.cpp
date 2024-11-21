/*Write a program that looks up the price of an item from the menu of a Hamburger stand. The program first takes as input an integer N that represents the number of items on the menu. This will be followed by each menu item (a single word) followed by its price (a double value). That list is followed by one of the menu items. Your program should output the price associated with that menu item.

Ex: If the input is:

4 Cheeseburger 2.65 Hamburger 2.25 Fries 1.35 Coke 1.75
Fries
the output is:

$1.35
You can assume there will be no more than 20 menu items, and there are no spaces in the names of the menu items.

Your program must define and call the following function. The return value of GetPrice is the price associated with the specific menu item.
double GetPrice(string menuItemArr[], double priceArr[], int size, string menuItem)

If the menu item is not found, the function should return -1.

Do not use vectors.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 6.16

#include <iostream>
using namespace std;

//*****************************************************************************
// GetPrice: Gets the price of a menu item from an array of menu items and 
// their prices.
// menuItemArr: an array of menu items.
// priceArr: an array of the prices of the menu items.
// size: the number of elements in the menuItemArr and priceArr arrays.
// menuItem: the menu item to look up the price for.
// returns: the price associated with the menu item, or -1 if the menu item is
// not found.
//*****************************************************************************

double GetPrice(string menuItemArr[], double priceArr[], int size, string menuItem) {
    for (int i = 0; i < size; i++) {
        if (menuItemArr[i] == menuItem) {
            return priceArr[i];
        }
    }
    return -1;
}

int main() {
    int N;
    cin >> N;
    string menuItemArr[N];
    double priceArr[N];

    for (int i = 0; i < N; i++) {
        cin >> menuItemArr[i] >> priceArr[i];
    }

    string menuItem;
    cin >> menuItem;

    double price = GetPrice(menuItemArr, priceArr, N, menuItem);

    if (price == -1) {
        cout << "Menu item not found" << endl;
    } else {
        cout << "$" << price << endl;
    }

    return 0;
}