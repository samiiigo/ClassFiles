/*Program Specifications Write a program to calculate the cost for replacing carpet for a single room. Carpet is priced by square foot. Total cost includes carpet, labor and sales tax. Dollar values are output with two decimals, which can be achieved by executing cout << fixed << setprecision(2); once before all other cout statements.

Note: This program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.

Step 1 (2 pts). Read from input the carpet price per square foot (double), room width (int) and room length (int). Calculate the room area in square feet. Calculate the carpet price based on square feet with an additional 20% for waste. Output square feet and carpet cost. Submit for grading to confirm 1 test passes.

Ex: If the input is:

1.10 15 12
the output is:

Room: 180 sq ft
Carpet: $237.60
Step 2 (2 pts). Calculate the labor cost for installation ($0.75 per actual square foot). Output labor cost. Submit for grading to confirm 2 tests pass.

Ex: If the input is:

0.95 10 16
the output is:

Room: 160 sq ft
Carpet: $182.40
Labor: $120.00
Step 3 (2 pts). Calculate sales tax (7%) on carpet and labor cost. Total cost includes carpet, labor and sales tax. Output sales tax and total cost. Submit for grading to confirm 3 tests pass.

Ex: If the input is:

1.25 8 8
the output is:

Room: 64 sq ft
Carpet: $96.00
Labor: $48.00
Tax: $10.08
Cost: $154.08
Step 4 (2 pts). Repeat steps 1-3 including additional input for a second order (one order per line). Maintain total sales for both orders. Output information for each order with a heading and then total sales for both orders. Submit for grading to confirm 4 tests pass.

Ex: If the input is:

0.95 12 12
1.25 8 18
the output is:

Order #1
Room: 144 sq ft
Carpet: $164.16
Labor: $108.00
Tax: $19.05
Cost: $291.21

Order #2
Room: 144 sq ft
Carpet: $216.00
Labor: $108.00
Tax: $22.68
Cost: $346.68

Total Sales: $637.89
Step 5 (2 pts). Repeat steps 1-3 including additional input for a third order (one order per line). Maintain total sales for all orders. Output information for each order with a heading and then total sales for all orders. Submit for grading to confirm all tests pass.

Ex: If the input is:

0.95 12 12
1.25 8 18
1.12 10 17
the output is:

Order #1
Room: 144 sq ft
Carpet: $164.16
Labor: $108.00
Tax: $19.05
Cost: $291.21

Order #2
Room: 144 sq ft
Carpet: $216.00
Labor: $108.00
Tax: $22.68
Cost: $346.68

Order #3
Room: 170 sq ft
Carpet: $228.48
Labor: $127.50
Tax: $24.92
Cost: $380.90

Total Sales: $1018.79
*/

#include <iostream>
#include <iomanip>

using namespace std;

double LABOR_COST = 0.75;
double SALES_TAX = 0.07;

double order(int, double, int, int);

int main(){
    double carpetPrice, totalSales = 0;
    int roomWidth, roomlength, orders = 0;


    while (cin >> carpetPrice >> roomWidth >> roomlength) {
        totalSales += order(++orders, carpetPrice, roomWidth, roomlength);
    }

    cout << fixed << setprecision(2);
    cout << "Total Sales: $" << totalSales << endl;

    return 0;
}

double order(int orderNum, double carpetPrice, int roomWidth, int roomlength) {
    cout << "Order #" << orderNum << endl;

    double totalCarpetPrice, totalLaborCost, totalTax, totalCost;
    int roomArea;

    roomArea = roomWidth * roomlength;
    totalCarpetPrice = (roomArea + (roomArea * 0.2)) * carpetPrice;
    totalLaborCost = roomArea * LABOR_COST;
    totalTax = (totalCarpetPrice + totalLaborCost) * SALES_TAX;
    totalCost = totalCarpetPrice + totalLaborCost + totalTax;

    cout << "Room: " << roomArea << " sq ft" << endl;
    cout << fixed << setprecision(2);
    cout << "Carpet: $" << totalCarpetPrice << endl;
    cout << "Labor: $" << totalLaborCost << endl;
    cout << "Tax: $" << totalTax << endl;
    cout << "Cost: $" << totalCost << endl;
    cout << endl;

    return totalCost;
}