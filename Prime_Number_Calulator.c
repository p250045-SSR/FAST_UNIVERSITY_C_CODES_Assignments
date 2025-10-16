#include<stdio.h>
int main(){
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = 2;
    while(i <= num-1){
        if(num % i == 0){
            printf("%d is not a prime number.\n", num);
            break;
        }
        i++;
    }
    if(i == num){
        printf("%d is a prime number.\n", num);
    }
    return 0;
}