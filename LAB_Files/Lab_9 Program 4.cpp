//Samyog Shrestha ytx16@txstate.edu
//11/07/2024
//CS1428 Lab
//Lab 9
//Description: this program will compute the frequency of each unique number in an array
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size; //number of elements to be stored in an array
    //Prompt the user for an array size
    cout << "Enter the size of an array:" << endl;
    cin >> size;

    int nums[size], frequency[10] = {0};
    int index = 0;

    for(int i = 0; i < size; i++)
    {
        // TODO: Populate array with random numbers
        nums[i] = rand() % 10 + 1;
    }
    cout << "\nNumbers in the array are: ";
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    //TODO: Determine the frequency of each number
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < size; j++){
            if (nums[j] == i+1){
                frequency[i]++;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 10; i++){
        cout << i+1 << ":" << frequency[i] << endl;
    }

    //TODO: Determine the index of the number with the highest frequency
    int maxFreq = frequency[0];
    for (int i = 0; i < 10; i++){
        if (frequency[i] > maxFreq){
            maxFreq = frequency[i];
            index = i;
        }
    }

    cout << "Number with highest frequency : " << index+1 << " occurred "
         << frequency[index] << " times" << endl;
    return 0;
}

