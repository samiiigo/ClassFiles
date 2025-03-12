// Samyog Shrestha ytx16@txstate.edu
// 11/20/2024
// Lab 11 Pre-Lab Assignment

//You may not have covered this material in your lecture sections.
//Complete as best as you are able.  Refer to the prelab reading for assistance.

//Add code where requested to complete the program.

#include <iostream>
#include <fstream>

using namespace std;

struct Snake
{
    string name;
    string breed;
    char gender;
    int age;
};

int main()
{
    // TODO - Create a Snake object named "snake1", and initialize its name to
    //        "Sally", gender to 'F', age to 5, and breed to "Boa".
    Snake snake1;
    snake1.name = "Sally";
    snake1.gender = 'F';
    snake1.age = 5;
    snake1.breed = "Boa";

    // TODO - Create a Snake object named "snake2".
    Snake snake2;

    // TODO - Prompt the user to enter the snake's name, age, gender, and breed,
    //        and assign them to the "snake2" object.
    //        Assume the snake name and breed are entered as a single word
    //        so that both will work with cin statements.

    cout << "Enter the snake's name: ";
    cin >> snake2.name;
    cout << "Enter the snake's gender (M/F): ";
    cin >> snake2.gender;
    cout << "Enter the snake's age: ";
    cin >> snake2.age;
    cout << "Enter the snake's breed: ";
    cin >> snake2.breed;

    // TODO - Print "snake1" and "snake2" objects to the console. E.g.
    //        "Name: Sally, Gender: F, Age: 5, Breed: Boa"
    cout << "snake1" << endl;
    cout << "Name: " << snake1.name << ", Gender: " << snake1.gender 
         << ", Age: " << snake1.age << ", Breed: " << snake1.breed << endl;

    cout << "snake1" << endl;
    cout << "Name: " << snake2.name << ", Gender: " << snake2.gender 
         << ", Age: " << snake2.age << ", Breed: " << snake2.breed << endl;

    return 0;
}