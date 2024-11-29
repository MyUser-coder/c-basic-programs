#include <stdio.h>

int main() {

int num,x,k,j;

printf("Enter the integer number : ");
scanf("%d",&num);
int space = num / 2;
int star = 1;

for (x = 1; x < (num - space) ; x++) {
    for (j = 1 ; j < space  ; j ++) {printf(" ");} 
         for (k = 0 ; k < star; k++) {printf("*");}
              for (j = 1 ; j < space  ; j ++) {printf(" ");}
printf("\n");
}
}
