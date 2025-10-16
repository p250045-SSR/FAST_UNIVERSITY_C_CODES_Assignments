#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
void main(){
    char guess, target;
    srand(time(0));
    target = 'a' + (rand() % 26);   //generates random letter between a to z by adding a random number between 0 to 25 to the ascii value oof a.

    printf("Enter a letter:");

    while(1){
    scanf(" %c", &guess);

    guess = tolower(guess);

    if(guess == target){
        printf("You Won!\n");
        break;
    }
    else if(guess < target){
        printf("Too low! Try Again:\n");
    }
    else{
        printf("Too high! Try Again:\n");
    }
}
}