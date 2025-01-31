/*Program Specifications Write a program to input a phone number and output a phone directory with five international numbers. Phone numbers are divided into four parts: 1) country code, 2) area code, 3) prefix, and 4) line number. For example, a phone number in the United States is +1 (555) 123-4567.

Note: this program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.

Step 1 (2 pts). Read from input an area code, prefix, and line number (integers). Output the directory heading (two lines). Insert two blank spaces between Country and Phone and the horizontal line is created with dashes (not underscores). Output a phone number for the United States with country code +1 using proper format. Submit for grading to confirm 2 tests pass.
Ex: If the input is:

555  457  2345
The output is:

Country  Phone Number
-------  ------------
U.S.     +1 (555)457-2345
Step 2 (2 pts). Output a phone number for Brazil with country code +55 and add 100 to the prefix. The prefix variable should not change. Instead, add 100 to the prefix within the print statement. For example, cout << ")" << (prefixNum + 100) << "-"); Submit for grading to confirm 3 tests pass.
Ex: If the input is:

555  457  2345
The output is:

Country  Phone Number
-------  ------------
U.S.     +1 (555)457-2345
Brazil   +55 (555)557-2345
Step 3 (2 pts). Output a phone number for Croatia with country code +385 and add 50 to the line number. Output a phone number for Egypt with country code +20 and add 30 to the area code. The variables should not change. Instead, add values within the print statement as in Step 2. Submit for grading to confirm 4 tests pass.
Ex: If the input is:

555  929  6453
The output is:

Country  Phone Number
-------  ------------
U.S.     +1 (555)929-6453
Brazil   +55 (555)1029-6453
Croatia  +385 (555)929-6503
Egypt    +20 (585)929-6453
Step 4 (2 pts). Output a phone number for France with country code +33 and swap the area code with the prefix. Submit for grading to confirm all tests pass.
Ex: If the input is:

555  929  6453
The output is:

Country  Phone Number
-------  ------------
U.S.     +1 (555)929-6453
Brazil   +55 (555)1029-6453
Croatia  +385 (555)929-6503
Egypt    +20 (585)929-6453
France   +33 (929)555-6453*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int areaCode, prefix, lineNum;
    cin >> areaCode >> prefix >> lineNum;

    cout << "Country  Phone Number" << endl;
    cout << "-------  ------------" << endl;
    cout << "U.S.     +1 (" << areaCode << ")" << prefix << "-" << lineNum << endl;
    cout << "Brazil   +55 (" << areaCode << ")" << prefix + 100 << "-" << lineNum << endl;
    cout << "Croatia  +385 (" << areaCode << ")" << prefix << "-" << lineNum + 50 << endl;
    cout << "Egypt    +20 (" << areaCode + 30 << ")" << prefix << "-" << lineNum << endl;
    cout << "France   +33 (" << prefix << ")" << areaCode << "-" << lineNum << endl;
    
    return 0;
}
