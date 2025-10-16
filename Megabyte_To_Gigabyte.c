#include<stdio.h>
int main(){
    float megabytes, gigabytes;
    printf("Enter storage in megabytes: ");
    scanf("%f", &megabytes);

    gigabytes = megabytes / 1000;		//In decimal system, / by 1000. In binary system, / by 1024.
    
    printf("%.2f megabytes is equal to %.2f gigabytes\n", megabytes, gigabytes);
    return 0;
}