#include <stdio.h>

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    
    printf("Original Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort
    bubbleSort(arr, n);
    printf("Sorted using Bubble Sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Selection Sort
    int arr2[] = {5, 2, 9, 1, 5, 6};
    selectionSort(arr2, n);
    printf("Sorted using Selection Sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Insertion Sort
    int arr3[] = {5, 2, 9, 1, 5, 6};
    insertionSort(arr3, n);
    printf("Sorted using Insertion Sort: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
