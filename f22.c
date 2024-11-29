// Problem: Write a program to multiply two matrices.
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix to 0
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Input:
Enter rows and columns of the first matrix: 2 3
Enter rows and columns of the second matrix: 3 2
Enter the elements of the first matrix:
1 2 3
4 5 6
Enter the elements of the second matrix:
7 8
9 10
11 12

Output:
Product of the two matrices:
58 64
139 154
*/
