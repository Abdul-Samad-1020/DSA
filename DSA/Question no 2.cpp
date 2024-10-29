#include <iostream>

using namespace std;

void addMatrices(int mat1[][3], int mat2[][3], int res[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}


void displayMatrix(int mat[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row = 2, col = 3;
    int mat1[row][col], mat2[row][col], res[row][col];

    
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat1[i][j];
        }
    }

   
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat2[i][j];
        }
    }

   
    addMatrices(mat1, mat2, res, row, col);

    
    cout << "Resultant matrix:" << endl;
    displayMatrix(res, row, col);

    return 0;
}