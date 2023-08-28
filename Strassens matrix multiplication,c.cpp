#include <stdio.h>

void MatMultiplication(int Mat_A[][3], int Mat_B[][2], int Row_1, int Row_2, int Col_1, int Col_2) {
    int result[3][2] = {0}; // Result matrix with 3 rows and 2 columns
    
    for (int i = 0; i < Row_1; i++) {
        for (int j = 0; j < Col_2; j++) {
            for (int k = 0; k < Row_2; k++) {
                result[i][j] += Mat_A[i][k] * Mat_B[k][j];
            }
        }
    }

    // Printing the result matrix
    for (int row = 0; row < Row_1; row++) {
        for (int col = 0; col < Col_2; col++) {
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }
}

int main() {
    int Row_1 = 3;
    int Col_1 = 3;
    int Row_2 = 3;
    int Col_2 = 2;

    int Mat_A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int Mat_B[3][2] = {{6, 1}, {9, 2}, {10, 3}};

    if (Col_1 != Row_2) {
        printf("Matrix Multiplication not possible");
    } else {
        MatMultiplication(Mat_A, Mat_B, Row_1, Row_2, Col_1, Col_2);
    }

    return 0;
}
