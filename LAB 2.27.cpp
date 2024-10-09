// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 2.27.1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double s, a, b, c;
    double areaTriangle, areaParallelogram;

    cin >> a >> b >> c;

    s = (a + b + c) / 2;

    areaTriangle = sqrt(s * (s - a) * (s - b) * (s - c));
    areaParallelogram = areaTriangle * 2;

    cout << "The area of the parallelogram is: ";
    cout << fixed << setprecision(3) << areaParallelogram << endl;

    return 0;
}
