#include <stdio.h>

int Swap(int,int*); // x --> by value , y --> by referance

int main(void){

int x,y;

printf("Enter x then y:\n");
scanf("%d %d", &x, &y);

x = Swap(x,&y);

printf("x = %d , y = %d", x, y);

    return 0;
}

int Swap(int a,int *b){

int temp = a;
a = *b;
*b = temp;
return a;

}