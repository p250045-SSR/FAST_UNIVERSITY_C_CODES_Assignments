#include <stdio.h>
int main()
{
    int num, d1, d2, d3, d4, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    d1 = num / 1000;         		// Extract the first digit, /1000 gives the integer part
    d2 = (num / 100) % 10;    		// Extract the second digit,/100 gives the integer part, %10 gives the remainder
    d3 = (num / 10) % 10;     		// Extract the third digit, %10 gives the remainder
    d4 = num % 10;            		// Extract the fourth digit, %10 gives the remainder

    if (d1 == d4 && d2 == d3) {     	// Check if the number is a palindrome
        printf("%d is a palindrome.\n", num);

        sum = d2 + d3;              	// Calculate the sum of the second and third digits

        if(sum ==2 || sum == 3 || sum == 5 || sum == 7 || sum == 11 || sum == 13 || sum == 17 || sum == 19)
         {
            printf("%d is a special palindrome.\n", num);
        }
        else {
            printf("%d is not a special palindrome.\n", num);
         }
         }
    else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}

