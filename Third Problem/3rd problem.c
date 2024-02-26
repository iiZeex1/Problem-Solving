#include <stdio.h>

const double pi = 22/7;

int main(void){
int choice;
do{
    printf("Enter the operation number you want to calculate:\n");
    printf("[1] Area of circle\n[2] Area of square\n[3] Area of rectangle\n");
    scanf("%d", &choice);
        }while(choice > 3 || choice < 1);

switch(choice){
    
case 1:{
double r;
printf("Enter the radius of the circle in meters:\n");
scanf("%lf", &r);
printf("The area of the circle is: %lf",pi*r*r );
break;}

case 2:{
double l;
printf("Enter the side of the square in meters:\n");
scanf("%lf", &l);
printf("The area of the square is: %lf",l*l );
break;}

case 3:{
double l,w;
printf("Enter the length and width of the rectangle in meters:\n");
scanf("%lf %lf", &l, &w);
printf("The area of the rectangle is: %lf", l*w );
break;}
}

    return 0;
}
