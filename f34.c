#include<stdio.h>

int display(int marks[]);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    display(marks); // Passing the array to the function
}

int display(int marks[]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\t", marks[i]);
    }
}
