#include <stdio.h>

int calculate(int);

void main(){
int x;
printf("Enter the number : ");
scanf("%d",&x);
printf("The square of %d is : %d \n", x , calculate(x));
}

int calculate(int x){
return (x*x);
}

