/*Write a program that reads a list of integers from input and outputs the list with the first and last numbers swapped. A negative one (-1) indicates the end of the input and should not be stored in the array. Assume the list contains fewer than 20 integers.

Ex: If the input is:

1 2 3 4 5 6 7 8 -1
the output is:

8 2 3 4 5 6 7 1
For coding simplicity, follow every output value by a space, including the last one. The output should end with a newline.

Note: your program must input all the values into the array, and then change (modify) the first and last elements in the array, and then output the resulting modified array.

Do not use functions. Do not use vectors.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 6.14

#include <iostream>
using namespace std;

int main() {
    const int maxSize = 20;
    int userValues[maxSize];
    int size = 0;

    while (true) {
        cin >> userValues[size];
        if (userValues[size] == -1) {
            break;
        }
        size++;
    }

    int temp = userValues[0];
    userValues[0] = userValues[size - 1];
    userValues[size - 1] = temp;

    for (int j = 0; j < size; j++) {
        cout << userValues[j] << " ";
    }
    cout << endl;

    return 0;
}