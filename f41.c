#include <stdio.h>

void rowSum(int arr[2][2], int rows);
void colSum(int arr[2][2], int cols);

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    
    rowSum(arr, 2);
    colSum(arr, 2);
    
    return 0;
}

void rowSum(int arr[2][2], int rows) {
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < 2; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
    }
}

void colSum(int arr[2][2], int cols) {
    for(int i = 0; i < cols; i++) {
        int sum = 0;
        for(int j = 0; j < 2; j++) {
            sum += arr[j][i];
        }
        printf("Sum of column %d = %d\n", i+1, sum);
    }
}
