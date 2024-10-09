// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 2.24.1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int carbs;
    int fat;
    int protein;

    const int CALORIES_CARBS = 4;
    const int CALORIES_FAT = 9;
    const int CALORIES_PROTEIN = 4;

    int totalCalories;
    double ratioProteinEnergy;

    cin >> carbs >> fat >> protein;

    totalCalories = carbs * CALORIES_CARBS + fat * CALORIES_FAT + protein * CALORIES_PROTEIN;
    ratioProteinEnergy = static_cast<double>(protein) / (fat + carbs);

    cout << totalCalories << " " << fixed << setprecision(2) << ratioProteinEnergy << endl;

    return 0;
}