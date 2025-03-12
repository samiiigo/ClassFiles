/*
Toll roads have different fees at different times of the day and on weekends. Write a function CalcToll() that has three arguments: the current hour of time (int), whether the time is morning (bool), and whether the day is a weekend (bool). The function returns the correct toll fee (double), based on the chart below.

Weekday Tolls

Before 7:00 am ($6.15)
7:00 am to 9:59 am ($7.95)
10:00 am to 2:59 pm ($6.90)
3:00 pm to 7:59 pm ($8.95)
Starting 8:00 pm ($6.40)
Weekend Tolls

Before 7:00 am ($6.05)
7:00 am to 7:59 pm ($7.15)
Starting 8:00 pm ($6.10)
Ex: The function calls below, with the given arguments, will return the following toll fees:

CalcToll(8, true, false) returns 7.95
CalcToll(1, false, false) returns 6.90
CalcToll(3, false, true) returns 7.15
CalcToll(5, true, true) returns 6.05
*/

#include <iostream>
#include <iomanip>
using namespace std;

double CalcToll(int hour, bool isMorning, bool isWeekend) {
    double toll = 0.0;

    (isMorning) ? hour : hour += 12;

    if (isWeekend) {
        if (hour < 7) {
            toll = 6.05;
        } else if (hour < 20) {
            toll = 7.15;
        } else {
            toll = 6.10;
        }
    } else {
        if (hour < 7) {
            toll = 6.15;
        } else if (hour < 10) {
            toll = 7.95;
        } else if (hour < 15) {
            toll = 6.90;
        } else if (hour < 20) {
            toll = 8.95;
        } else {
            toll = 6.40;
        }
    }
    return toll;
}

int main() {
    cout << CalcToll(8, true, false) << endl;   // 7.95
    cout << CalcToll(1, false, false) << endl;  // 6.90
    cout << CalcToll(3, false, true) << endl;   // 7.15
    cout << CalcToll(5, true, true) << endl;    // 6.05

    return 0;
}