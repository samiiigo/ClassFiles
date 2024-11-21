/*Write a program to calculate the score from a throw of five dice. Scores are assigned to different categories: for "five of a kind", "straight", and "chance".

Your program must include the following functions. Each function must take one parameter, an array of 5 integers, that represents the numbers on the five dice cast (values can be 1 through 6).

chance() returns the sum of the dice
fiveOfKind() returns 50 if all five dice are the same value (otherwise 0)
straight() returns 40 for 1,2,3,4,5 or 2,3,4,5,6 (otherwise 0)
isSorted() returns true if the dice values are in sorted order (each value is less than or equal to the next value in the array) otherwise false. This function should return a bool value (true or false). See section 3.12 for more information about the Boolean data type.
The main program should ask the user to enter the 5 dice values in ascending sorted order. If the input values are not in increasing, order, output the error message: "Error: not in increasing order". If the values are in increasing order, then the program should call the three functions to see which one returns the highest value, and output that value as the Highest Score.

Ex: If input is:

3 3 3 3 3
the output is:

High score: 50
Ex: If input is:

2 4 1 5 4
the output is:

Error: not in increasing order
Ex: If input is:

1 2 4 4 5
the output is:

High score: 16
Follow the Style Guidelines (especially function header comments).*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 6.15

#include <iostream>
#include <algorithm>
using namespace std;

int chance(int dice[]);
int fiveOfKind(int dice[]);
int straight(int dice[]);
bool isSorted(int dice[]);

int main() {
    int dice[5];
    for (int i = 0; i < 5; i++) {
        cin >> dice[i];
    }

    if (!isSorted(dice)) {
        cout << "Error: not in increasing order" << endl;
        return 1;
    }

    int scoreChance = chance(dice);
    int scoreFiveOfKind = fiveOfKind(dice);
    int scoreStraight = straight(dice);

    int scores[] = {scoreChance, scoreFiveOfKind, scoreStraight};

    int highestScore = 0;
    for (int i = 0; i < 3; i++) {
        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }
    }

    cout << "High Score: " << highestScore << endl;

    return 0;
}

//*****************************************************************************
// chance: Calculates the sum of the given dice values
// dice[]: array of 5 integers representing the numbers on the five dice casted
// returns: The sum of the dice values
//*****************************************************************************

int chance(int dice[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += dice[i];
    }
    return sum;
}

//*****************************************************************************
// fiveOfKind: Checks if the given dice values are all different
// dice[]: array of 5 integers representing the numbers on the five dice casted
// returns: 50 if all five dice are the same value, 0 otherwise
//*****************************************************************************

int fiveOfKind(int dice[]) {
    for (int i = 1; i < 5; i++) {
        if (dice[i] != dice[0]) {
            return 0;
        }
    }
    return 50;
}

//*****************************************************************************
// straight: Checks if the given dice values represent a straight
// dice[]: array of 5 integers representing the numbers on the five dice casted
// returns: returns 40 for 1,2,3,4,5 or 2,3,4,5,6 (otherwise 0)
//*****************************************************************************

int straight(int dice[]) {
    if ((dice[0] == 1 && dice[1] == 2 && dice[2] == 3 && dice[3] == 4 && dice[4] == 5) ||
        (dice[0] == 2 && dice[1] == 3 && dice[2] == 4 && dice[3] == 5 && dice[4] == 6)) {
        return 40;
    }
    return 0;
}

//*****************************************************************************
// isSorted: Checks if the dice values are in sorted order.
// dice[]: array of 5 integers representing the numbers on the five dice casted
// Return: true if the dice values are in sorted order; otherwise false
//*****************************************************************************

bool isSorted(int dice[]) {
    for (int i = 0; i < 4; i++) {
        if (dice[i] > dice[i + 1]) {
            return false;
        }
    }
    return true;
}