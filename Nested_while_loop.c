#include<stdio.h>
int main(){
    int i=1, j=1;
    while(i++<=100){             //runs 100 times
        while(j++<=200){         //runs 200 times
            if (j==150)
            break;
            else
            printf("%d%d\n",i,j);
        }
    }
    return 0;

}