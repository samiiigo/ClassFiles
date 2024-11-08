//Samyog Shrestha ytx16@txstate.edu
//11/07/2024
//CS1428 Lab
//Lab 9
//Description: this program will track movie preferences for the user
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 6; //number of movies
    const string GAMES[] = {"The Matrix",
                            "Fight Club",
                            "Spirited Away",
                            "Alien",
                            "Seven Samurai",
                            "Back to the Future"};

    double ratings[SIZE];
    double total = 0,
           average;
    int highest_index = 0;

    //Prompt the user for movie ratings
    cout << "Please enter a rating for the following movies:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << GAMES[i] << "  : ";
        // TODO: Take user input for movie rating HERE
        cin >> ratings[i];
    }

    // TODO: Determine the average rating
    // TODO: Determine the index of the movie with the highest rating
    int maxRating = ratings[0];
    for (int i = 0; i < SIZE; i++){
        double rating = ratings[i];
        total += rating;
        if (rating > maxRating){
            maxRating = rating;
            highest_index = i;
        }
    }

    average = total/SIZE;

    cout << fixed << setprecision(1)
         << "Average rating : " << average << endl
         << "Highest rating : " << GAMES[highest_index] << " rated "
         << ratings[highest_index] << endl;

    return 0;
}

