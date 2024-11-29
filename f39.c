#include <stdio.h>

int findMax(int arr[], int n);

int main() {
    int arr[10], i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements:\n");
    for(i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Maximum element: %d", findMax(arr, n));
    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
