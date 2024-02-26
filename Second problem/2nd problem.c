#include <stdio.h>

int sum(int,int);

int main(void){

int n1 , n2;
printf("Enter n1 and n2:\n");
scanf("%d %d", &n1, &n2);
printf("The total is: %d",sum(n1,n2));

    return 0;
}

int sum(int a,int b){

if(b == a+1){
    return 0;
}

return (b-1) + sum(a,b-1);
}