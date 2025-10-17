#include <stdio.h>
void main(){
    int amount, pin;
    int notes5000, notes1000, notes500, notes100;
    
     do {
        printf("Enter pin: ");
        scanf("%d", &pin);
        if (pin != 786110) {
            printf("Invalid pin! Try again.\n");
        }
    } while (pin != 786110);

    printf("You entered a valid pin.\n");
    
    printf("Enter an amount:");
    scanf("%d",&amount);


    if(amount % 100 != 0){
        printf("\nError! Amount must be multiple of 100.");
    }
    else{
        notes5000 = amount / 5000;
        amount %= 5000;
        notes1000 = amount / 1000;
        amount %= 1000;
        notes500 = amount / 500;
        amount %= 500;
        notes100 = amount / 100;
    }
    printf("\nNotes:");
    printf("\nRS 5000 :%d ", notes5000);
    printf("\nRS 1000 :%d ", notes1000);
    printf("\nRS 500 :%d ", notes500);
    printf("\nRS 100 :%d ", notes100);

}
