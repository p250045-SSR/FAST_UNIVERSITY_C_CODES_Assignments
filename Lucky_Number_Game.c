#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int guess, number, i;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (1-100). You have 5 chances.\n");

    for(i = 1; i <= 5; i++){
        printf("Attempt %d: ", i);
        scanf("%d",&guess);
        if(guess == number){
        printf("You gussed it right!\n");
        break;
        }
        else if(guess < number){
            printf("Too low!\n");
        }
        else {
            printf("Too high!\n");
        }
    }
    if (i >5)
    printf("Out of chances! The number was %d\n", number);
    
}