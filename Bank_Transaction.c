#include<stdio.h>
int main()
{
    int choice;
    float balance = 1000.0;
    float amount;
    printf("Enter your choice(1-3):\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Check Balance\n");
    scanf("%d",&choice);

    switch (choice) {
        case 1: {
            printf("Enter amount to withdraw:");
            scanf("%f",&amount);

            if(amount<=balance){
                printf("Withdrawl successful. New balance: %.2f\n", balance-amount);
            }
            else
            {
                printf("Insufficient balance\n");
            }
            break;
        }
        case 2: {
            printf("Enter amount to deposit:");
            scanf("%f", amount);
            printf("Deposit successful. New balance: %.2f\n", balance + amount);
            break;
        }
        case 3: {
            printf("Your balance is: %.2f\n",balance);
            break;
        }
        default: {
            printf("Invalid choice")
        }
       
    }
}