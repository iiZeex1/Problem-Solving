#include <stdio.h>

int main(void){

int c = 0;
long long num;
printf("Enter your number: \n");
scanf("%lld", &num);


while((num / 10) >= 1){
    c++;
    num /= 10;
}
printf("Your number has %d digit/s\n", (c+1));

    return 0;
}