#include <stdio.h>
#include <math.h>
void main(){
    double principal, rate, amount;
    int years;

    printf("Enter principal amount: ");
    scanf("%lf",&principal);
    printf("Enter annual interest rate: ");
    scanf("%lf",&rate);
    printf("Enter number of years: ");
    scanf("%d",&years);

    for (int i = 1; i <= years; i++){
        amount = principal * pow(1 + rate / 100, i);
        printf("Year &d: Balance = %.2lf\n", i, amount);

        if (amount >= 2 * principal){
            printf("Balance doubled! Stopping early.\n");
            break;
        }
    }
}