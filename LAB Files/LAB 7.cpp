//Samyog Shrestha ytx16@txstate.edu
//10/24/2024
//CS1428 Lab
//Lab 7
//Description: this program will play with digits of a number entered by a user

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Funtion prototypes:
int getInput();
int findMin(int);
float findAverage(int);

/**
 * Main function.
 *
 * This program will prompt the user for a number and compute the smallest
 * digit and average of the digits of the number. The program will then ask
 * the user if they wish to continue. If the user enters 'n' or 'N', the
 * program will terminate.
 */
int main()
{
	char choice;
	int min_digit;
	float average;
    int num;

	do
    {
        num = getInput();
        cout << "The integer entered by the user is " << num << endl;

        min_digit = findMin(num);
        cout << "Smallest Digit: " << min_digit << endl;

        average = findAverage(num);
        cout << "Average: " << fixed << setprecision(2) << average << endl;
        cout << "Would you like to Continue: ";
        cin >> choice;
    }
    while(choice != 'N' && choice != 'n');

    cout << "Terminating program..." << endl;
	return 0;
}

// Function definitions
// TODO: Add Your Function Definitions Here

/**
 * @brief Gets an integer from the user between 100 and 10000 (inclusive)
 *
 * @return The integer entered by the user
 */
int getInput()
{
    int inputNum;

    cout << "Enter an Integer [100 - 10000]: ";
    cin >> inputNum;

    return inputNum;
}



/**
 * @brief Finds the smallest digit in an integer
 *
 * @param num The integer to find the smallest digit in
 * @return The smallest digit in the integer
 */
int findMin(int num)
{
    int min_num = num % 10;

    while (num > 0)
    {
        int num_ = num % 10;
        if (num_ < min_num)
        {
            min_num = num_;
        }
        num /= 10;
    }

    return min_num;
}

/**
 * @brief Calculates the average of the digits in a given integer.
 *
 * This function takes an integer as input and computes the average of its digits.
 * It iterates through each digit, sums them up, and divides by the number of digits
 * to find the average.
 *
 * @param num The integer whose digit average is to be calculated.
 * @return The average of the digits as a float.
 */
float findAverage(int num)
{
    int count = 0;
    int total = 0;

    while (num > 0)
    {
        total += num % 10;
        count++;
        num /= 10;
    }

    float avg = total/static_cast<float>(count);

    return avg;
}