#include <stdio.h>
void main()
{

int a , b, c , operator;
printf("%d",a);

printf("Enter 2 numbers : ");
scanf("%d %d", &a,&b);

printf("Enter the operator : ");
scanf("%d",&operator);

switch (operator)
{
case 1:
{c = a + b;
printf("%d\n",c);
break;
case 2:
{c = a - b;
printf("%d\n",c);
break;}
case 3:
{c = a * b;
printf("%d\n",c);
break;}
case 4:
{c = a / b;
printf("%d\n",c);
break;}
default:
{printf("Error operator\n");
break;}
}
}
