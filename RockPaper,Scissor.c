#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int user_choice, computer_choice;
    srand(time(0));                     // seed the random number generator
    printf("Enter 1 for rock, 2 for paper, 3 for scissors:");
    scanf("%d", &user_choice);

    computer_choice = (rand()%3) + 1;       // generates a random number between 1 and 3

    printf("Computer chose: %d\n", computer_choice);

    printf("\nYou choose:");
    switch(user_choice){
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }

    printf("\nComputer choose:");
    switch(computer_choice){
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }

    if(computer_choice == user_choice){
        printf("\nIt's a tie!\n");
    }
    else if(user_choice == 1 && computer_choice == 3 || user_choice == 2 && computer_choice == 1 || user_choice == 3 && computer_choice == 2 ){
        printf("\nYou win!");
    }
    else{
        printf("\nComputer wins!");
    }
    return 0;

}