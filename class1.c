#include <stdio.h>

int addnum(int,int);
int main()
{
  int num1,num2,val;
  printf("Enter the number 1 & 2 : ");
  scanf("%d %d",&num1,&num2);
  printf("Sum = %d \n",val = addnum(num1,num2));
}

int addnum(int num1,int num2) {
return (num1 + num2);
}


