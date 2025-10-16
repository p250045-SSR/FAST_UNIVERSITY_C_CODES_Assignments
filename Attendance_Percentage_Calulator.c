#include <stdio.h>
int main()
{
    int total_classes, attended_classes;
    float percentage;

    printf("Total Classes held:\n");
    scanf("%d", &total_classes);

    printf("Attended classes:\n");
    scanf("%d", &attended_classes);

    percentage = (float)attended_classes / (float)total_classes * 100;      //Changing type explicitly

    printf("\nAttendance Percentage:%.2f", percentage);

    //using Ternary Operator
    printf("\n%s", (percentage>=75) ? "\nStudent is allowed to sit in the exam" : "\nStudent is not allowed to sit in the exam");

    return 0;
}