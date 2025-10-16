#include<stdio.h>
void main(){
    float amount, final_Bill;
    for (int i = 1; i <= 10; i++){
        printf("\nEnter total purchase amount for customer %d: ", i);
        scanf("%f", &amount);

        if (amount >= 20000)
        final_Bill = amount * 0.7;
        else if(amount >= 10000)
        final_Bill = amount * 0.8;
        else if(amount >= 5000)
        final_Bill = amount * 0.9;
        else
        final_Bill = amount;

        printf("Final Bill after discount: %.2f\n", final_Bill);
        
    }
}