#include <stdio.h>
void main(){
    int present = 0;
    char status;

    printf("Enter attedance of 30 employees (P/A): \n");
    for (int i = 1; i <= 30; i++){
        printf("Employee %d: ", i);
        scanf(" %c", &status);

        if (status == 'P' || status == 'A')
        present++;
    }
    float percentage = (present / 30.0) * 100;
    printf("\nTotal present: %d (%.2f%%)\n", present, percentage);

    if (percentage < 50)
    printf("Low Attendance Warning!");
    else
    printf("Good Attendance.\n");
}