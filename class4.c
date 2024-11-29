#include <stdio.h>

void main() {
int reverse;
printf("Enter the number ");
scanf("%d",&reverse);
printf("Reverse : ");
while (reverse != 0) {
printf("%d", reverse%10);
reverse = reverse / 10;
}
printf("\n");
}
