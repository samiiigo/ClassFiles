/*
Program Specifications Write a program to calculate U.S. income tax owed given wages, taxable interest, unemployment compensation, status (single or married) and taxes withheld. Taxpayers are only allowed to use this short form if adjusted gross income (AGI) is less than $120000. Dollar amounts are displayed as integers with no comma separators. For example, cout << "Deduction: $" << deduction

Note: this program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.

Step 1 (2 pts). Input wages, taxable interest, unemployment compensation, status (1=single and 2=married) and taxes withheld as integers. Calculate and output AGI (wages + interest + unemployment). Output error message if AGI is above $120000 and the program stops with no additional output. Submit for grading to confirm two tests pass.
Ex: If the input is:

20000  23  500  1  400
The output is:

AGI: $20523
Ex: If the input is:

120000  23  500  1  400
The output is:

AGI: $120523
Error: Income too high to use this form

Step 2 (3 pts). Identify deduction amount based on status: (1) Single=$12000 or (2) Married=$24000. Set status to 1 if not input as 1 or 2. Calculate taxable income (AGI - deduction). Set taxable income to zero if negative. Output deduction and taxable income. Submit for grading to confirm five tests pass.
Ex: If the input is:

20000  23  500  1  400
Ex: The additional output is:

AGI: $20523
Deduction: $12000
Taxable income: $8523

Step 3 (3 pts). Calculate tax amount based on exemption and taxable income (see tables below). Tax amount should be stored as a double and rounded to the nearest whole number using round(). Submit for grading to confirm eight tests pass.
Ex: If the input is:

20000  23  500  1  400
Ex: The additional output is:

AGI: $20523
Deduction: $12000
Taxable income: $8523
Federal tax: $852
Income	Tax for Single Filers
$0 - $10000	10% of the income
$10001 - $40000	$1000 + 12% of the amount over $10000
$40001 - $85000	$4600 + 22% of the amount over $40000
over $85000	$14500 + 24% of the amount over $85000
Income	Tax for Married Filers
$0 - $20000	10% of the income
$20001 - $80000	$2000 + 12% of the amount over $20000
over $80000	$9200 + 22% of the amount over $80000

Step 4 (2 pts). Calculate amount of tax due (tax - withheld). If the amount due is negative the tax payer receives a refund. Output tax due or tax refund as positive values. Submit for grading to confirm all tests pass.
Ex: If the input is:

80000  0  500  2  12000
Ex: The additional output is:

AGI: $80500
Deduction: $24000
Taxable income: $56500
Federal tax: $6380
Tax refund: $5620
*/

#include <iostream>
#include <cmath>
using namespace std;

double calculateFederalTax(int, int );

int main() {

    int wages, taxableInterest, unemploymentCompensation, maritalStatus, taxesWithheld;

    cin >> wages >> taxableInterest >> unemploymentCompensation >> maritalStatus >> taxesWithheld;

    maritalStatus = (maritalStatus == 1 || maritalStatus == 2) ? maritalStatus : 1;

    int agi = wages + taxableInterest + unemploymentCompensation;

    cout << "AGI: $" << agi << endl;

    if (agi > 120000) {
        cout << "Error: Income too high to use this form" << endl;
        return 1;
    }

    int deduction = (maritalStatus == 1) ? 12000 : 24000;
    int taxableIncome = (agi - deduction<0) ? 0 : agi - deduction;

    double federalTax = calculateFederalTax(taxableIncome, maritalStatus);    
    double taxDue = federalTax - taxesWithheld;
    double taxRefund = (taxDue < 0) ? abs(taxDue) : 0;

    cout << "Deduction: $" << deduction << endl;
    cout << "Taxable income: $" << taxableIncome<< endl;
    cout << "Federal tax: $" << round(federalTax) << endl;
    cout << (!taxRefund ? "Taxes Owed: $" + to_string(taxDue) : "Tax refund: $" + to_string(taxRefund)) << endl;

    return 0;
}

double calculateFederalTax(int taxableIncome, int maritalStatus) {
    double tax = 0.0;
    if (maritalStatus == 2) {
        if (taxableIncome > 80000) {
            tax = 9200 + (taxableIncome - 80000) * 0.22;
        } else if (taxableIncome > 20000) {
            tax = 2000 + (taxableIncome - 20000) * 0.12; 
        } else {
            tax = taxableIncome * 0.10; 
        }
    } else {
        if (taxableIncome > 85000) {
            tax = 14500 + (taxableIncome - 85000) * 0.24;
        } else if (taxableIncome > 40000) {
            tax = 4600 + (taxableIncome - 40000) * 0.22; 
        } else if (taxableIncome > 10000) {
            tax = 1000 + (taxableIncome - 10000) * 0.12; 
        } else {
            tax = taxableIncome * 0.10; 
        }
    }
    
    return tax;
}