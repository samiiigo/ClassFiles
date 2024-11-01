#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;

    cout << "Radius" << setw(8) << right << "Volume" << endl;

    for (int radius = 1; radius < 11; radius++)
    {
        double volume = (4.0 / 3.0) * PI * radius * radius * radius;
        cout << setw(6) << radius << setw(8) << fixed << setprecision(2) << volume << endl;
    }
    return 0;
}