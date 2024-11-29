// Problem: Write a program to find the sum of all elements in a 2D array.
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}

/*
Input:
Enter the number of rows and columns: 2 3
Enter the elements of the array:
1 2 3
4 5 6

Output:
Sum of all elements = 21
*/
