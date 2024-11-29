#include <stdio.h>


int presence(int *array, int);

void main(){
int value[3] = {1,2,3,4,5};
int search,cond;

printf("Enter the number : ");
scanf("%d", &search);

cond = presence(value,search);
if (cond == 1){
printf("Yepp it's present \n");
}
else {printf("Nope it's not present \n");}
}

int presence(int value[], int search){
int cond = 0,x;
for (x=0; x<= 4; x++){
if (value[x] == search){
cond = 1;
break;
}
}
return cond;
}

