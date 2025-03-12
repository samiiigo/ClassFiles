/*A mobile phone service provider offers the following voice plans:

Package A: 450 minutes for $39.99. .45/minute for each additional minute.
Package B: 900 minutes for $59.99. .40/minute for each additional minute.
Package C: Unlimited minutes for $69.99.
Output the following menu to prompt the user for the customer’s cell phone plan and monthly minutes:

Rate Plans:
A. The 450 minute plan
B. The 900 minute plan
C. The unlimited plan
Enter the letter of the rate plan and the number of minutes used in the month:
Then compute the customer’s monthly bill and display the total amount due with a dollar sign and formatted to 2 decimal places

Ex: If the input is:

B 875
the output is:

$59.99
Ex: If the input is:

A 550
the output is:

$84.99
Ex: If the input is:

D 550
the output is:

Invalid Rate Plan
Your solution must use a switch statement and use the provided named constants.*/

#include <iostream>
#include <iomanip>
using namespace std;

const int MINUTES_A = 450;    // Plan A base minutes
const int MINUTES_B = 900;    // Plan B base minutes
    
const double BASE_A = 39.99;   // Plan A base cost
const double BASE_B = 59.99;   // Plan B base cost
const double BASE_C = 69.99;   // Plan C base cost
    
const double ADDL_PER_MINUTE_A = .45;  // Plan A additional cost per minute
const double ADDL_PER_MINUTE_B = .40;  // Plan B additional cost per minute

int main() {
    char plan;
    int minutes;
    double total;
     
    cout << "Rate Plans:" << endl;
    cout << "A. The 450 minute plan" << endl;
    cout << "B. The 900 minute plan" << endl;
    cout << "C. The unlimited plan" << endl;
    cout << "Enter the letter of the rate plan and the number of minutes used in the month:" << endl;

    cin >> plan >> minutes;

    switch (plan) {
        case 'A':
        case 'a':
            if (minutes <= MINUTES_A) {
                total =  BASE_A;
            } else {
                total = BASE_A + (minutes - MINUTES_A) * ADDL_PER_MINUTE_A;
            }
            break;

        case 'B':
        case 'b':
            if (minutes <= MINUTES_B) {
                total = BASE_B;
            } else {
                total = BASE_B + (minutes - MINUTES_B) * ADDL_PER_MINUTE_B;
            }
            break;

        case 'C':
        case 'c':
            total = BASE_C;
            break;
        
        default:
            cout << "Invalid Rate Plan" << endl;
            return -1;
    }

    cout << "$" << fixed << setprecision(2) << total << endl;

    return 0;
}