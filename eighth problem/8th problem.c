#include <stdio.h>

void scanNumbers(int n, int *numbers);
void sum(int*,int*,int,int*);
void print(int[],int);

int main() {
int n;
printf("How many numbers do you want to scan? ");
scanf("%d", &n);
int numbers1[n],numbers2[n],result[n];
scanNumbers(n, numbers1);
scanNumbers(n, numbers2);
sum(numbers1,numbers2,n, &result);
print(result , n);

    return 0;
}
void scanNumbers(int n, int *numbers) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
}
void sum(int* arr1,int* arr2, int n,int* result){
    for(int i=0;i < n;i++){
    result[i] = arr1[i] + arr2[i];
    }
}
void print(int result[],int n){
    for(int i =0 ; i < n ;i++){
        printf("%d ", result[i]);
    }
}