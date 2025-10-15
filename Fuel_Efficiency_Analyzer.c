#include <stdio.h>
void main(){
    float mileage, fuel, efficiency;
    int i;
    for (i = 1; i <= 5; i++){
        printf("\nEnter mileage (km) for car %d: ", i);
        scanf("%f",&mileage);
        printf("\nEnter fuel used (liters) for car %d: ", i);
        scanf("%f",&fuel);
        efficiency = mileage / fuel;
        printf("Efficiency = %.2f km/l" ,efficiency);

        if (efficiency > 20)
        printf("Excellent\n");
        else if (efficiency >= 15)
        printf("Good\n");
        else if (efficiency >= 10)
        printf("Average\n");
        else
        printf("Poor\n");
    }
}