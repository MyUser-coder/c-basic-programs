// Problem: Write a program to find the largest element in a 2D array.
#include <stdio.h>

int main() {
    int rows, cols, i, j, max;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Maximum element = %d\n", max);
    return 0;
}

/*
Input:
Enter the number of rows and columns: 2 2
Enter the elements of the array:
10 20
15 25

Output:
Maximum element = 25
*/
