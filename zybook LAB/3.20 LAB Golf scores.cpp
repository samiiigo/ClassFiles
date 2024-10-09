/*Golf scores record the number of strokes used to get the ball in the hole. The expected number of strokes varies from hole to hole and is called par (i.e. 3, 4, or 5). Each score's name is based on the actual strokes taken compared to par:

"Eagle": strokes is two less than par
"Birdie": strokes is one less than par
"Par": strokes equals par
"Bogey": strokes is one more than par
Given two integers that represent par and the number of strokes used, write a program that prints the appropriate score name. Print "Error" if par is not 3, 4, or 5. Print "None" if the par is valid, but the strokes do not fall in the range of Eagle/Birdie/Par/Bogey.

Ex: If the input is:

4 3
the output is:

Birdie*/

#include <iostream>
using namespace std;

int main() {
    int par;
    int strokes;

    cin >> par >> strokes;

    if (par == 3 ){
        if (strokes == par-2){
            cout << "Eagle" << endl;
        } else if  (strokes  == par-1){
            cout << "Birdie" << endl;
        } else if (strokes == par) {
            cout <<  "Par" << endl;
        } else if (strokes == par+1) {
            cout << "Bogey" << endl;
        } else {
            cout << "None" << endl;
        }
    } else if (par == 4){
        if (strokes == par-2){
            cout << "Eagle" << endl;
        } else if  (strokes  == par-1){
            cout << "Birdie" << endl;
        } else if (strokes == par) {
            cout <<  "Par" << endl;
        } else if (strokes == par+1) {
            cout << "Bogey" << endl;
        } else {
            cout << "None" << endl;
        }
    }  else if (par == 5){
        if (strokes == par-2){
            cout << "Eagle" << endl;
        } else if  (strokes  == par-1){
            cout << "Birdie" << endl;
        } else if (strokes == par) {
            cout <<  "Par" << endl;
        } else if (strokes == par+1) {
            cout << "Bogey" << endl;
        } else {
            cout << "None" << endl;
        }
    } else {
        cout << "Error" << endl;
    }

	return 0;
}