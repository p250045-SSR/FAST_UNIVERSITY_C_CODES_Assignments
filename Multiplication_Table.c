#include<stdio.h>
void main(){
    int num, limit, i = 1;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf("Multiplication of %d upto %d: %d \n",num,limit);
    for(i = 1; i<= limit; i++){
        printf("%d*%d= %d \n",num,i,num*i);
    }
}