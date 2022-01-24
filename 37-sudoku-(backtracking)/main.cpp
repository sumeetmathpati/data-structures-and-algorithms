#include <iostream>

using namespace std;

void printMatrix(int mat[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }
}

bool canPlaced(int mat[9][9], int i, int j, int x) {

    // Check if can be placed in a row and col.
    for (int k = 0; k < 9; k++) {
        if (mat[i][k] == x || mat[k][j] == x) {
            return false;
        }
    }

    int c = (j/3) + 2;
    int r = (i/3) + 2;
    // Check in side 3x3 grid;
    for (int k = c; k <= c+2; k++) {
        for (int l = r; l <= r+2; l++) {
            if (mat[k][l] == x) {
                return false;
            }
        }
    }
     
    return true;
}

bool solve(int mat[9][9], int i, int j) {

    // If we are at the last row, print matrix.
    if (i == 9) {
        printMatrix(mat);
        return true;
    }
    
    // If we are at the last column, go to next row.
    if (j == 9) {
        return solve(mat, i+1, 0);
    }
    
    // Skip pre filled cell.
    if (mat[i][j] != 0) {
        return solve(mat, i, j+1);
    }

    for (int k = 1; k < 9; k++) {

        // Check if the number can be placed according to
        // sudoku rules.
        if (canPlaced(mat, i, j, k)) {
            mat[i][i] = k;
            bool canBeSolved = solve(mat, i, j+1);
            if (canBeSolved) {
                return true;
            }
        }
    }

    mat[i][j] = 0;
    return false;

}

int main() {

    int n = 9;

    int mat[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> mat[i][j];
        }
    }    

    solve(mat, 0, 8);

    return 0;
}