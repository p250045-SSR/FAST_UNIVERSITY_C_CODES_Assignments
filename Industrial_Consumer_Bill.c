#include <stdio.h>
int main()
{
    int consumer_type, units;
    float bill = 0.0, total_bill = 0.0, surcharge = 0.0;
    printf("Enter Consumer Type (1-Domestic, 2-Commercial, 3-Industrial): ");
    scanf("%d", &consumer_type);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    switch (consumer_type)
    {
        case 1: //Domestic
            if (units <= 100)
                bill = units * 5;
            else if (units <= 300)
                bill = (100 * 5) + (units - 100) * 7;
            else
                bill = (100 * 5) + (200 * 7) + (units - 300) * 10;
                printf("Domestic Consumer Bill: %.2f\n", bill);
                break;

        case 2: //Commercial
            if (units <= 200)
                bill = units * 8;
            else if (units <= 500)
                bill = (200 * 8) + (units - 200) * 12;
            else
                bill = (200 * 8) + (300 * 12) + (units - 500) * 15;
                printf("Commercial Consumer Bill: %.2f\n", bill);
                break;
        
        case 3: //Industrial
            if (units <= 500)
               bill = units * 15;
            else
                bill = (500 * 15) + (units - 500) * 20;

            if (units > 1000)                //Surcharge for units above 1000
                surcharge = bill * 0.10;
                printf("Industrial Consumer Bill before surcharge: %.2f\n", bill);
                bill += surcharge;
                printf("Total Industrial Consumer Bill after 10%% surcharge: %.2f\n", bill);
                break;

        default:
            printf("Invalid Consumer Type!\n");
            break;
    }
    return 0;
}