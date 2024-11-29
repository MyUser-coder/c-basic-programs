#include <stdio.h>
#include <math.h>

int main() {

float a,b,c,discriminent = 0,det1,det2 ;
int choice;

printf("Enter the cofficents :");
scanf("%f %f %f", &a, &b , &c);

discriminent = b * b - 4 * a * c;
if (discriminent > 0) {
choice = 1;
}
else if (discriminent == 0 ) {
choice = 0;
}
else { 
choice = -1;
}

switch (choice){
case 1 : {
det1 = (-b + sqrt(discriminent))/(2 * a);
det2 = (-b - sqrt(discriminent))/(2 * a);
printf("2 solutions \n");
printf("Root 1 = %f & Root 2 = %f \n" , det1,det2);
break;
}
case 0 :{
det1 = (-b)/ ( 2 * a );
printf("1 unique solution \n");
printf("Unique root = %f \n" , det1);
break;
}
case -1: {
printf("No real roots \nImaginary\n");
break;
}
}

return 0;
}





