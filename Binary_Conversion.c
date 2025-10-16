#include<stdio.h>
void main(){
    int num, ninary[10],i = 0;
    printf("Enter a number less than 512:");
    scanf("%d",&num);

    printf("%d in binary:");
    for(i = 7; i >=0; i--){
        printf("%d", (num >> i) & 1);     //& checks least significant bit.
    }

}