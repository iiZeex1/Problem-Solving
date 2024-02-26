#include <stdio.h>

char *inverse(char*);

int main(void){

char name[100];
char *pr = name;
printf("Enter The String: \n");
scanf("%s", name);
printf("The inversed String is: %s", inverse(pr));

    return 0;
    /* t3bt feeh wallahy ,  it took me about 3 hours
        Your better appreciate xD              
        7beet a3mloh by pointers because why not  */
}

char *inverse(char* i){
    static char output[100];
char *temp = i;
char *o = output;
while(*i != '\0'){
    i++;
}
i--;
while(i >= temp){
*o = *i;
*o++;
i--;
}
return (output);
}