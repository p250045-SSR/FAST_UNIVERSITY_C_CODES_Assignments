#include <stdio.h>
void main(){
    int n = 5;
    //Increasing pattern
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        printf("%d",j);
        printf("\n");
    }
    //Decreasing pattern
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++)
        printf("%d", j);
        printf("\n");
    }
}