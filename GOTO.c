#include <stdio.h>
int main()
{
    int num_wrong_attempts = 0;

    label:

    if(num_wrong_attempts < 3) {
        num_wrong_attempts++;

        printf("Wrong attempts %d.\n", num_wrong_attempts);
        goto label;
    } else {

        printf("Account locked.\n" );
    }


    return 0;
}


//break and continue are used in loops to control the flow of execution.