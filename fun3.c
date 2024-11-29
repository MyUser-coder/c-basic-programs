#include <stdio.h>

void reverse(int reverse[]);  // Update function to return void

void main(){
    int numb[5];
    printf("Enter the 5 numbers: ");
    scanf("%d %d %d %d %d", &numb[0], &numb[1],&numb[2],&numb[3],&numb[4]);

    reverse(numb);  // Call reverse function with the array

    printf("Maximum order: %d %d %d %d %d \n", numb[0], numb[1], numb[2],numb[3],numb[4]);  // Three format specifiers
}

void reverse(int reverse[]){
    int temp, x,y;
    for (y = 1; y <= 3 ; y++) {
    for (x = 0; x <= (4 - y); x++) {  // Loop to go through first two elements
        if (reverse[x] > reverse[x + 1]) {
            temp = reverse[x];
            reverse[x] = reverse[x + 1];
            reverse[x + 1] = temp;
    }
    }
    }
}

