#include<stdio.h>
#include<time.h>
int main()
{
    printf("**********************************************************\n");			//Adding Headers
    printf("\n\tWELCOME TO SMART & UTILITY SHOPPING HUB\n");
    printf("\n**********************************************************\n");			//Adding Footers

    time_t tm;				//declares variable tm of type time_t
    time(&tm);				
    printf("\nCurrent Date/Time : %s", ctime(&tm));
    printf("\nDisplay prices(per kg) of items available in the shop:");
    printf("\n1. Rice = 300");
    printf("\n2. Sugar = 200 ");
    printf("\n3. Potatoes = 150 ");
    printf("\n4. Apples = 400 ");

    float rice_kg, sugar_kg, potatoes_kg, apples_kg;

    printf("\n\nEnter quantity of rice (kg): ");
    scanf("%f", &rice_kg);
    printf("Enter quantity of sugar (kg): ");
    scanf("%f", &sugar_kg);
    printf("Enter the quantities of potatoes (kg) : ");
    scanf("%f", &potatoes_kg);
    printf("Enter the quantities of apples (kg) : ");
    scanf("%f", &apples_kg);

    printf("Calculating total for each item...\n");		
    float rice_total =rice_kg * 300;
    float sugar_total = sugar_kg * 200;
    float potatoes_total = potatoes_kg * 150;
    float apples_total = apples_kg * 400;

    printf("\nTotal for rice: %.2f", rice_total);
    printf("\nTotal for sugar: %.2f", sugar_total);
    printf("\nTotal for potatoes: %.2f", potatoes_total);
    printf("\nTotal for apples: %.2f", apples_total);

    printf("\n-------------------------- BILL --------------------------\n");
    printf("Item\tQuantity(kg)\tRate(per kg)\tTotal\n");
    printf("Rice\t %.2f\t\t300\t\t%.2f", rice_kg, rice_total);
    printf("\nSugar\t %.2f\t\t200\t\t%.2f", sugar_kg, sugar_total);
    printf("\nPotatoes %.2f\t\t150\t\t%.2f", potatoes_kg, potatoes_total);
    printf("\nApples\t %.2f\t\t400\t\t%.2f", apples_kg, apples_total);
   

    float grand_total = rice_total + sugar_total + potatoes_total + apples_total; 

    printf("\n\nGrocery sub_total: %.2f\n", grand_total);

    float customer_pay = 10000 - grand_total;
    int rem;

    int rs_5000 = (int)customer_pay / 5000;
    rem = (int)customer_pay % 5000;

    int rs_1000 = rem / 1000;
    rem = rem % 1000;

    int rs_500 = rem / 500;
    rem = rem % 500;

    int rs_100 = rem / 100;
    rem = rem % 100;

    int rs_50 = rem / 50;
    rem = rem % 50;

    int rs_20 = rem / 20;
    rem = rem % 20;

    printf("\nCustomer Payable: %.2f\n", customer_pay);
    printf("Rupees 5000 notes = %d\n", rs_5000);
    printf("Rupees 1000 notes = %d\n", rs_1000);
    printf("Rupees 500 notes  = %d\n", rs_500);
    printf("Rupees 100 notes  = %d\n", rs_100);
    printf("Rupees 50 notes   = %d\n", rs_50);
    printf("Rupees 20 notes   = %d\n", rs_20);
     
     printf("\nGrand Total = %.2f\n", grand_total);
     printf("\nAmount paid by customer = 10000\n");
     printf("\nBalance to be returned to customer = %.2f\n", 10000 - grand_total);

    printf("\n********************************************\n");
    printf("\tTHANK YOU FOR USING SMART HUB!\n");


     return 0;
    
}


