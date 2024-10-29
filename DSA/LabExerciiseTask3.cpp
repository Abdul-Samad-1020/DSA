#include <iostream>

using namespace std;
void addMatrices(int mat1[][3], int mat2[][3], int res[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void printMatrix(int mat[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matB[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int res[2][3];
    addMatrices(matA matB, res, 2, 3);
    cout << "Matrix 1:" << endl;
    printMatrix(matA, 2, 3);
    cout << "Matrix 2:" << endl;
    printMatrix(matB, 2, 3);
    cout << "Resultant Matrix:" << endl;
    printMatrix(res, 2, 3);
    return 0;
}