// Problem: Write a program to find the second largest number in an array of integers.
#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -2147483648; // Minimum possible integer
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element = %d\n", secondLargest);
    }
    return 0;
}

/*
Input:
Enter the number of elements: 5
Enter 5 elements: 12 35 1 10 34

Output:
Second largest element = 34
*/

