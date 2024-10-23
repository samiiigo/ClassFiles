/*Given a line of text as input, output the number of characters excluding spaces, periods, exclamation points, or commas.

Ex: If the input is:

Listen, Mr. Jones, calm down.
the output is:

21
Note: Account for all characters that aren't spaces, periods, exclamation points, or commas (Ex: "r", "3", "?").*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 4.16.1

#include <iostream>
using namespace std;

int main() {
    string userText;
    int numChar = 0;

    getline(cin, userText);

    for (int i = 0; i < userText.length(); i++) {
        if (userText[i] != ' ' && userText[i] != '.' && userText[i] != '!' && userText[i] != ',') {
            numChar++;
        }
    }
    cout << numChar << endl;
    return 0;
}
