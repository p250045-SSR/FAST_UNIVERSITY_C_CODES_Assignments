#include <stdio.h>
void main(){
    int num, even = 0, odd = 0, positive = 0, negative = 0;
    printf("Enter numbers (0 to stop):\n");

    while (1){
        scanf("%d",&num);

        if (num == 0)
        break;

        if (num > 0)
        positive++;
        else
        negative++;

        if (num % 2 == 0)
        even++;
        else
        odd++;
    }
    printf("\nEven: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

}