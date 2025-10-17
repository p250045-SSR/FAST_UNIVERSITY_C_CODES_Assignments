#include <stdio.h>
int main() {
    long num, temp, reversed = 0, digit;

    printf("Enter any number: ");
    scanf("%ld", &num);

    temp = num;

    // Reverse the number
    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    // Check palindrome
    if (num == reversed)
        printf("%ld is a palindrome.\n", num);
    else
        printf("%ld is not a palindrome.\n", num);

    return 0;
}
