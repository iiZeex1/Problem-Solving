#include <stdio.h>
#include <ctype.h>

int main(void){

char input;
printf("Enter The character (one char please): \n");
scanf("%c", &input);

if(isupper(input)){
    printf("Your character is uppercase\n");
}else if(islower(input)){
    printf("Your character is lowercase\n");
}else if(input >= 48 && input <= 57){ // ascii code of numbers from 0 to 9
printf("You Entered a number\n");
} else{
    printf("Your character is a special character\n");
}

    return 0;
}