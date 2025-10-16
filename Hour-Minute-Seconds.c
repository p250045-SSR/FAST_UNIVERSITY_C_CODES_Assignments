#include <stdio.h>
#include <math.h>
int main()
{
    int seconds, hour, minutes;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);  
    hour = seconds / 3600;          // / is used for division
    seconds = seconds % 3600;       // % is used for modulus operation. It is used to get remainder
    minutes = seconds / 60;             
    seconds = seconds % 60;

    printf("3700 seconds = %d hours : %d minutes : %d seconds ", hour, minutes, seconds);
    return 0;

}
 