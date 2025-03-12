/*7.5 LAB: Soccer players roster (Arrays)
This program will store roster and rating information for a soccer players. Coaches rate players during tryouts to ensure a balanced players. Use a struct named Player to store the name, jersey number and rating for a single player. Use an array of struct to store the data for the entire players. Use a global named constant to store the size of the array (and use it in your program). Jersey numbers are between 0 and 99 and ratings are between 1 and 9. You must use the bolded identifiers above when naming your struct and your last struct member, in order for the test cases to work.

The program should keep an array of 5 Player structures. When the program runs, it should initialize the array using the following data:

        {"Lloyd",10, 8},
        {"Pugh",11, 5},
        {"Morgan",13, 7},
        {"Rapinoe",15, 5},
        {"Dunn",19, 6}
Next, it should prompt the user to update player ratings. The user will enter a jersey number and a new rating for each desired player. The user will enter -1 for the jersey (and no new rating) to quit updating player ratings.

Your program must define and use the following function:

void updateRating (Player t[], int playerJersey, int playerRating) to change a single player's rating. It should not do any input or output.

Finally the program should prompt the user for a rating. Then it should print the name, jersey number, and rating for all players with ratings above the entered value.

Your program must define and use the following function:

void aboveRating (Player t[], int playerRating) to output the players above the given rating.

Sample output:

Update player rating, enter -1 to quit: 
Enter a jersey number:
13
Enter a new rating for player:
9
Enter a jersey number:
15
Enter a new rating for player:
4
Enter a jersey number:
-1
Enter a rating:
7

ABOVE 7
Lloyd -- Jersey number: 10, Rating: 8
Morgan -- Jersey number: 13, Rating: 9
Do not use vectors.*/

// Samyog Shrestha ytx16@txstate.edu
// No collaborators
// LAB 7.5

#include <iostream>
using namespace std;

const int TEAM_SIZE = 5;

struct Player {
    string name;
    int jerseyNumber;
    int rating;
};

//****************************************************************************
// updateRating: Updates the rating of a player based on their jersey number.
// t: the array of Player structs
// playerJersey: the jersey number of the player whose rating needs to be updated
// playerRating: the new rating to be assigned to the player
//****************************************************************************
void updateRating(Player t[], int playerJersey, int playerRating) {
    for (int i = 0; i < TEAM_SIZE; ++i) {
        if (t[i].jerseyNumber == playerJersey) {
            t[i].rating = playerRating;
            break;
        }
    }
}

//****************************************************************************
// aboveRating: Outputs the names, jersey numbers, and ratings of players
//    whose rating is above a specified value.
// t: the array of Player structs
// playerRating: the rating threshold
//****************************************************************************
void aboveRating(Player t[], int playerRating) {
    cout << endl << "ABOVE " << playerRating << endl;
    
    for (int i = 0; i < TEAM_SIZE; i++) {
        if (t[i].rating > playerRating) {
            cout << t[i].name << " -- Jersey number: " << t[i].jerseyNumber 
                 << ", Rating: " << t[i].rating << endl;
        }
    }
}

int main() {

    Player players[TEAM_SIZE] = {
        {"Lloyd",10, 8},
        {"Pugh",11, 5},
        {"Morgan",13, 7},
        {"Rapinoe",15, 5},
        {"Dunn",19, 6}
    };

    int jerseyNumber, newRating;

    cout << "Update player rating, enter -1 to quit: " << endl;

    while (true) {
        cout << "Enter a jersey number:" << endl;
        cin >> jerseyNumber;
        if (jerseyNumber == -1) {
            break;
        }
        cout << "Enter a new rating for player:" << endl;
        cin >> newRating;

        updateRating(players, jerseyNumber, newRating);
    }

    int thresholdRating;
    cout << "Enter a rating:" << endl;
    cin >> thresholdRating;

    aboveRating(players, thresholdRating);

    return 0;
}