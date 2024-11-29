#include<stdio.h>

int linear(int a[], int n, int key);

int main() {
    int a[10], i, key, n;
    printf("How many elements? ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    linear(a, n, key);
}

int linear(int a[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Element found at index %d", i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}
