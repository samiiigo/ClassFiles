/*Write a program that repeatedly reads in words (or names) without spaces until the string “XXX” is read. The program keeps track of the “smallest” word that has been read so far (the one that would come first in alphabetical order) and outputs that word when XXX is encountered. It also outputs a count of the total number of non-whitespace characters in the input before the "XXXX". (Practice subsection Example: Finding the max value of section 4.1 Loops (general) and change it accordingly to fit your solution).

Ex: If the input is:

John Mary Andrew Stanley XXX
the output is:

Andrew
21 characters
A word is a sequence of characters with no spaces. Assume the words will either contain only lowercase letters or will all start with an uppercase letter followed by lowercase letters. Store the words in string variables and use < or > to compare the words (you do not need to look at individual characters). Assume there will be at least one word before XXX and all words will be unique.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 4.15.1

#include <iostream>
using namespace std;

int main() {
    string smallestWord, word;
    int charCount = 0;

    cin >> word;
    smallestWord = word;
    charCount += word.length();

    while (true) {
        cin >> word;
        if (word != "XXX") {
            if (word < smallestWord) {
            smallestWord = word;
            }
            charCount += word.length();
        }else{
            break;
        }
    }

    cout << smallestWord << endl;
    cout << charCount << " characters" << endl;

    return 0;
}