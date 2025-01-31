/*Write a program that inputs a side length for a square, and three characters. It outputs a square with the following pattern:

character 1 before/below the diagonal
character 2 on the diagonal
character 3 above/after the diagonal
Each line ends with a blank space.

Ex: If the input is:

5 + & -
the output is:

& - - - -
+ & - - -
+ + & - -
+ + + & -
+ + + + &*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 4.17.1

#include <iostream>
using namespace std;

int main() {
    int sideLength;
    char char1, char2, char3;

    cin >> sideLength >> char1 >> char2 >> char3;

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            if (j == i) {
                cout << char2 << "";
            } else if (j < i) {
                cout << char1 << "";
            } else {
                cout << char3 << "";
            }
        }
        cout << endl;
    }

   return 0;
}