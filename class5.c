#include <stdio.h>

int highest(int , int , int);

void main() {'
int num1,num2,num3;
printf("Enter 3 numbers : ");
scanf("%d %d %d",&num1,&num2,&num3);
highest(num1,num2,num3);
}

int highest(int num1,int num2,int num3){
return (num1>num2 && num1>num3) ? num1:
}
