#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    switch(num>0){
        case 1:
        printf("Positive number\n");
        break;
        case 0:
            switch(num<0){
                case 1:
                printf("Negative\n");

                case 0:
                printf("Zero");
            }
    }
    return 0;
}