// Samyog Shrestha ytx16@txstate.edu
// 11//2024
// Lab 10 Pre-Lab Assignment

// Write a function that multiplies each element in the array "myArray"
// by the variable "multiplyMe".

#include <iostream>

using namespace std;

// TODO - Write your function prototype here
void multiplyArray(int myArray[], int size, int multiplyMe);

int main()
{
    const int SIZE = 10;
    int myArray [SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int multiplyMe = 5;

    // TODO - Add your function call here
    multiplyArray(myArray, SIZE, multiplyMe);

    // print the array
    for(int i=0; i < SIZE; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}

// TODO - Write your function definition here
void multiplyArray(int myArray[], int size, int multiplyMe) {
    for (int i = 0; i < size; i++) {
        myArray[i] *= multiplyMe;
    }
}