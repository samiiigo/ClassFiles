// Samyog Shrestha ytx16@txstate.edu
// 11/05/2024
// Lab 9 Pre-Lab Assignment

// Program takes 7 numbers from a user (from console), stores them into an
// array, and then prints them to the screen (on the same line).

// Add code to complete this program. You only need to add code where indicated
// by "ADD HERE".

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;  // size of array

    // ADD HERE - create an array of integers that will hold 7 integers.
    int num[SIZE];

    cout << "please enter 7 integers : " << endl;

    // For loop takes 7 integers from user and stores them in the array
    for (int i = 0 ; i < SIZE ; i++)
    {
        // ADD HERE - take user's input and store it in the array you created
        cin >> num[i];
    }

    // ADD HERE - Write a for loop to print the array to the screen
    for (int i = 0; i < SIZE; i++){
        cout << num[i] << endl;
    }

    return 0;
}