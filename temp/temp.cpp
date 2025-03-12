#include <iostream>

using namespace std;

void mkInverseBoard();
void printInvBoard();
void printBoard();
bool isValid(int row, int col, int num);
bool solveBoard();
bool solveBoardRecursive(int row, int col);

int BOARD[9][9] = {
    {9, 1, 3,    0, 0, 0,    5, 0, 0},
    {6, 0, 7,    0, 0, 0,    0, 2, 4},
    {0, 5, 0,    0, 8, 0,    0, 7, 0},

    {0, 7, 9,    0, 0, 0,    0, 0, 0},
    {0, 0, 2,    0, 9, 0,    0, 4, 3},
    {0, 0, 0,    0, 0, 4,    0, 9, 0},

    {0, 4, 0,    0, 0, 1,    9, 0, 0},
    {7, 0, 6,    0, 0, 9,    0, 0, 5},
    {0, 0, 1,    0, 0, 6,    4, 0, 7}
};

int typeBOARD[9][9]; // Keeps track of original vs. filled cells

int main(){
    cout << "Original Sudoku board:" << endl;
    printBoard();

    mkInverseBoard();
    cout << "Type board (showing fixed cells):" << endl;
    printInvBoard();

    cout << "Solving..." << endl;
    if (solveBoard()) {
        cout << "Solution found!" << endl;
        printBoard();
    } else {
        cout << "No solution exists for this Sudoku puzzle." << endl;
    }

    return 0;
}

void mkInverseBoard() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            typeBOARD[i][j] = (BOARD[i][j] != 0 ? -1 : 0);
        }
    }
}

void printInvBoard(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(j%3==0) cout << "    ";
            cout << typeBOARD[i][j] << " ";
        }
        if(i%3==2) cout << "\n";
        cout << endl;
    }
}

void printBoard(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(j%3==0) cout << "    ";
            cout << BOARD[i][j] << " ";
        }
        if(i%3==2) cout << "\n";
        cout << endl;
    }
}

bool isValid(int row, int col, int num){
    // Check row
    for (int i = 0; i < 9; i++) {
        if (BOARD[row][i] == num) {
            return false;
        }
    }

    // Check column
    for (int i = 0; i < 9; i++) {
        if (BOARD[i][col] == num) {
            return false;
        }
    }

    // Check 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (BOARD[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solveBoard() {
    return solveBoardRecursive(0, 0);
}

bool solveBoardRecursive(int row, int col) {
    // If we've filled the entire board, we're done
    if (row == 9) {
        return true;
    }

    // Move to the next cell
    int nextRow = (col == 8) ? row + 1 : row;
    int nextCol = (col == 8) ? 0 : col + 1;

    // If this cell is already filled, move to the next one
    if (typeBOARD[row][col] == -1) {
        return solveBoardRecursive(nextRow, nextCol);
    }

    // Try each number 1-9
    for (int num = 1; num <= 9; num++) {
        if (isValid(row, col, num)) {
            // Place the number
            BOARD[row][col] = num;

            // Recursively try to solve the rest of the board
            if (solveBoardRecursive(nextRow, nextCol)) {
                return true;
            }

            // If we get here, this placement didn't work, so undo it (backtrack)
            BOARD[row][col] = 0;
        }
    }

    // If no number works, we need to backtrack
    return false;
}