#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num >= 1000 && num <= 9999){
        printf("%d is a 4-digit number.\n",num);
    }
    else{
        printf("%d is not a 4-digit number.\n",num);
    }
}