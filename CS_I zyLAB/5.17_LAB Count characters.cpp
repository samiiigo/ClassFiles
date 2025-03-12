/*Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string. The output should include the input character and use the plural form, n's, if the number of times the characters appears is not exactly 1.

Ex: If the input is:

n Monday
the output is:

1 n
Ex: If the input is:

z Today is Monday
the output is:

0 z's
Ex: If the input is:

n It's a sunny day
the output is:

2 n's
Case matters: n is different than N.

Ex: If the input is:

n Nobody
the output is:

0 n's
The program must define and call the following function that takes the input string and character as parameters, and returns the number of times the input character appears in the input string.
int CalcNumCharacters(string userString, char userChar)*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 5.17

#include <iostream>
using namespace std;

//*****************************************************************************
// CalcNumCharacters: Calculate the number of times the characters appears in 
// a string.
// userString: The string to check the count of the character.
// userChar: The character to be counted in the string.
// returns: The number of given character in the string.
//*****************************************************************************

int CalcNumCharacters(string userString, char userChar) {
    int count = 0;
    for (unsigned i = 0; i < userString.length(); i++) {
        if (userString[i] == userChar) {
            count++;
        }
    }
    return count;
}

int main() {
    string userString;
    char userChar;
    int numChars;

    cin >> userChar;
    getline(cin, userString);

    numChars = CalcNumCharacters(userString, userChar);

    if (numChars == 1) {
        cout << numChars << " " << userChar << endl;
    } else {
        cout << numChars << " " << userChar << "'s" << endl;
    }

    return 0;
}
