#include <stdio.h>
void main(){
    long long a = 7778742049,  b = 12586269025, temp, i, one;       //F(49) & F(50)
    int count = 0, even = 0;
    for(i = 12586269025; i >= 0; i--){
        if(i<=1){
            b = 1;
        }
        else {
            one = b - a;
            b = a;
            a = one;
        }
        if (one % 2 == 0){
            even++;
            printf("\n%lld",one);
        }
        if(even == 10){
            break;
        }
    }
}