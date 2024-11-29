// Problem: Write a program to reverse the elements of an array.
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
Input:
Enter the number of elements: 5
Enter 5 elements: 10 20 30 40 50

Output:
Reversed array: 50 40 30 20 10
*/

