/*In an effort to stem the alarming increase in elbow and shoulder injuries among young baseball pitchers,  Little League Baseball adopted important rules in 2007 to determine how much rest a pitcher must take after pitching appearances.  The required number of rest days are outlined in the tables below

Age 7-14:
Pitches	Required rest days
66 or more	4
51 to 65	3
36 to 50	2
21 to 35	1
1 to 20	0
Age 15-18:
Pitches	Required rest days
76 or more	4
61 to 75	3
46 to 60	2
31 to 45	1
1 to 30	0
Write a program that calculates the amount of rest a little league pitcher must take after pitching. The input is the age of the pitcher and how many pitches they have thrown. The output is the number of rest days required. If the age is out of range ( less than 7 or greater than 18) the program should give the following error message and exit: age out of range

Ex: If the input is:

8 57
the output is:

3 rest days required
Ex: If the input is:

15 31
the output is:

1 rest day required
Ex: If the input is:

15 2
the output is:

0 rest days required
Ex: If the input is:

19 27
the output is:

age out of range
Note: Do not use && to specify the ranges. Use what the book calls "Detecting ranges implicitly" in Participation Activity 3.5.10 (the example on the right-hand side). There will be a 6 point deduction for using && to detect the ranges explicitly.*/

#include <iostream>
using  namespace std;

int main (){

    int age, pitches;

    cin >> age >> pitches;

    if (age < 7){
        cout << "age out of range" << endl;
        return -1;
    } else if (age < 15){
        if (pitches > 65){
            cout << "4 rest days required" << endl;
        } else if (pitches > 50){
            cout << "3 rest days required" << endl;
        } else if (pitches > 35){
            cout << "2 rest days required" << endl;
        } else if (pitches > 20){
            cout << "1 rest day required" << endl;
        } else {
            cout << "0 rest days required" << endl;    
        }
    } else if (age < 19){
        if (pitches > 75){
            cout << "4 rest days required" << endl;
        } else if (pitches > 60){
            cout << "3 rest days required" << endl;
        } else if (pitches > 45){
            cout << "2 rest days required" << endl;
        } else if (pitches > 30){
            cout << "1 rest day required" << endl;
        } else {
            cout << "0 rest days required" << endl;    
        }
    } else {
        cout << "age out of range" << endl;
        return -1;
    }

    return 0;
}