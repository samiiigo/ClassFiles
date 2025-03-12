/*Write a program that gets some data about the fuel efficiency of a car and the price of gas from input:

The miles per gallon rating for the car
The price of gas (in dollars)
The number of rows to display in the table
The program will display a table showing the driving costs for driving certain distances. The table starts the distance at 100 miles and increases by 100 miles for each row:

Ex: If the input is:

20.0 3.1599 4
the output is:

100: 15.80
200: 31.60
300: 47.40
400: 63.20
The miles per gallon and price of gas could have fractional amounts like 20.5, but the rows will be an integer

The formula that calculates the driving costs is:

Distance/MPG * price

where MPG is the efficiency rating of the car in miles per gallon and price is the price of gas in dollars per gallon.

Write your code to define and use two functions:

double drivingCost(double distance, double milesPerGallon, double dollarsPerGallon)
This function computes the driving costs using the formula above.

void outputTable (double milesPerGallon, double dollarsPerGallon, int rows)
This function displays the table. It calls the previous function to compute each row of the table. Note: if the rows value is 0 or less the function should output "ERROR".

The driving costs should be output with exactly 2 digits after the decimal point. Use an integer to output the distances in the table.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 5.18 

#include<iostream>
#include<iomanip>
using namespace std;

//*****************************************************************************
// drivingCost: Calculate the driving costs using the formula:
// Distance/MPG * price
// distance: The distance in miles
// milesPerGallon: The miles per gallon rating for the car
// dollarsPerGallon: The price of gas (in dollars)
// return: The driving costs
//*****************************************************************************

double drivingCost(double distance, double milesPerGallon, double dollarsPerGallon) {
    return (distance / milesPerGallon) * dollarsPerGallon;
}

//*****************************************************************************
// outputTable: Displays a table of driving costs.
// milesPerGallon: The miles per gallon rating for the car
// dollarsPerGallon: The price of gas (in dollars)
// rows: The number of rows to display in the table
//*****************************************************************************

void outputTable(double milesPerGallon, double dollarsPerGallon, int rows) {
    if (rows <= 0) {
        cout << "ERROR" << endl;
        return;
    }

    for (int distance = 100; distance <= 100 * rows; distance += 100) {
        double cost = drivingCost(distance, milesPerGallon, dollarsPerGallon);
        cout << distance << ": " << fixed << setprecision(2) << cost << endl;
    }
}

int main() {
    double milesPerGallon, dollarsPerGallon;
    int rows;

    cin >> milesPerGallon >> dollarsPerGallon >> rows;

    outputTable(milesPerGallon, dollarsPerGallon, rows);

    return 0;
}
