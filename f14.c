// Problem: Write a program to calculate the sum of all elements in an array.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements = %d\n", sum);
    return 0;
}

/*
Input:
Enter the number of elements: 4
Enter 4 elements: 5 10 15 20

Output:
Sum of elements = 50
*/
