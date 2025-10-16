#include <stdio.h>
void main(){
    int marks[5], total = 0, fail = 0, i;
    float percentage;

    for (i = 0; i<5; i++){
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 33)
        fail = 1;
    }
    if (fail)
    printf("\nResult: Fail");
    else {
        percentage = total / 5.0;
        printf("Total = %d, Percentage = %.2f%%\n", total, percentage);

        if (percentage >= 80)
        printf("Grade: A\n");
        else if(percentage >= 70)
        printf("Grade: B\n");
        else if(percentage >= 60)
        printf("Grade: C\n");
        else if(percentage >= 50)
        printf("Grade: D\n");
        else
        printf("Grade: E\n");
    }
}