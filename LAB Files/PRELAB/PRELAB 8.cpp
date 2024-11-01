// Samyog Shrestha ytx16@txstate.edu
// 10/30/2024
// Lab 8 Pre-Lab Assignment

// Add the following functions:

// 1. 'getSide' asks the user to enter the length of a side of a
//     square and returns the given value. (should return a double)

// 2. 'calcArea' takes the length of a side and returns the area of a square.

// 3. 'printResults' void type function that should print the results to
//    console.

// The function call is provided, you just need to implement the
// function prototype and function definition.

#include <iostream>
using namespace std;

// TODO - write the prototypes here

double getSide();
double calcArea(double);
void printResults(double);

int main()
{
    double side,
           area;

    // TODO - call 'getSide' function and assign the
    //        returned value to side.

    side = getSide();

    area = calcArea(side);

    // TODO - move the following cout to the 'printResults' function
    //        and call that function here instead.

    printResults(area);

    return 0;
}

// TODO - write the functions here

double getSide(){
    double side;

    cout << "Enter the length of a side of a square: ";
    cin >> side;
    
    return side;
}

double calcArea(double side){
    return side * side;
}

void printResults(double area){
    cout << "The area of your square is " << area << " units squared."
         << endl;
}