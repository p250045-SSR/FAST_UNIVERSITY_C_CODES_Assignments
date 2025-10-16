#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, x1, x2, d;

    printf("Enter coefficients:(a,b, and c)");
    scanf("%f\t%f\t%f", &a,&b,&c);

    d =  b*b - 4*a*c;

    switch ( (int)d ) {
        case 2:     //d>0
        x1= (-b+sqrt(d)) / (2*a);
        x2= (-b-sqrt(d)) / (2*a);
        printf("Two Real Soln:\n");
        printf("x1=%.2f\n",x1);
        printf("x2=%.2f\n",x2);
        break;

        case 1:     //d=0
        x1= (-b+sqrt(d)) / (2*a);
        printf("one Real Soln:\n");
        printf("x1=%.2f\n",x1);
        break;

        case 0:      //root are < 0
        printf("No real soultion");
        break;

        }
        return 0;


}