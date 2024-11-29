#include <stdio.h>

void fib(int);
void main(){
int val;
printf("Enter the series values to display : ");
scanf("%d",&val);
fib(val);
}

void fib(int val){
int t1 = 0,t2 = 1,temp;
printf("Series : ");
for (int x = 0 ; x <= val ; x ++){
printf("%d ",t1);
temp = t1 + t2;
t1 = t2;
t2 = temp;
}
printf("\n");
}
