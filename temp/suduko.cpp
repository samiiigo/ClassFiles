//
// Created by samyo on 2/24/2025.
//
#include <iostream>

using namespace std;

void mkInverseBoard();
void nkCopyBoard();
void printInvBoard();
void printBoard();
bool isValid(int row, int col, int num);
void fallbackSolve(int k);
void solveBoard(int k);

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

int typeBOARD[9][9];
int copyBOARD[9][9] = {
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

int main(){
    //printBoard();
    mkInverseBoard();
    printInvBoard();
    solveBoard(1);
    printBoard();
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
            (j%3==0 ? cout << "    ": cout << "");
            cout << typeBOARD[i][j] << " ";
        }
        (i%3==2 ? cout << "\n": cout << "");
        cout << endl;
    }
}

void printBoard(){
    cout << endl << endl;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            (j%3==0 ? cout << "\t": cout << "");
            cout << BOARD[i][j] << " ";
        }
        (i%3==2 ? cout << "\n": cout << "");
        cout << endl;
    }
}

bool isValid(int row, int col, int num){
    for (int i = 0; i < 9; i++) {
        if (BOARD[row][i] == num || BOARD[i][col] == num) {
            return false;
        }
    }
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

void fallbackSolve(int k) {
    //return;
    cout << "FALLBACK##" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (typeBOARD[i][j] == 0) {
                solveBoard(BOARD[i][j]+1);
                //return;
            }
        }
    }
}

void solveBoard(int k) {
    int temp_i, temp_j, temp_k = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (typeBOARD[i][j] == 0) {
                for (k; k < 10; k++) {
                    cout << endl << i << ", " << j << ", " << k;
                    if (!isValid(i, j, k)) {
                        if (BOARD[i][j] != 0) {
                            cout << k << " ERROR FALLBACK" << endl;
                            temp_k = k;
                            break;
                        }
                    } else {
                        cout << " ACCEPTED" << endl;
                        cout << "\tnum before: " << BOARD[i][j] << endl;
                        BOARD[i][j] = k;
                        cout << "\tnum after: " << BOARD[i][j] << endl;
                        k=0;
                        printBoard();
                        break;
                    }

                }
                k=0;
            }
            if (temp_k) break;
        }
        if (temp_k) break;
    }
    fallbackSolve(temp_k);
}
