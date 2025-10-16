#include<stdio.h>
int main()
{
    int marks, rechk;

    printf("Enter marks:\n ");
    scanf("%d",&marks);
    printf("Do you want to recheck your paper? (1 for yes/ 0 for no):\n ");
    scanf("%d",&rechk);
    
    if(marks>=90 && marks<=100)
    {
    if(rechk==1)
    {
        printf("\nGrade:A+");
        printf("\nYour request for re-checking is accepted\n");

    }
    else
    {
        printf("\nGrade:A\n");
        printf("\nNo re-checking\n");
    }
    
    }


   else if(marks>=80 && marks<90)
   {
    if(rechk==1) 
        {   
            printf("\nGrade:A\n");
            printf("\nYour request for re-checking is accepted\n");
        }
        else
        {
            printf("\nGrade:B\n");
            printf("\nNo re-checking\n");
        }
   }


    else if(marks>=70 && marks<80)
    {

        if(rechk==1)
        {   
            printf("\nGrade:C\n");
            printf("\nYour request for re-checking is accepted\n");
        }
        else
        {
            printf("\nGrade:C\n");
            printf("\nNo re-checking\n");
        }
    }


   else if(marks>60 && marks<70)
    {
        if(rechk==1)
        { 
            printf("\nGrade:D\n");
            printf("\nYour request for re-checking is accepted\n");
        }
        else
        {   
            printf("\nGrade:D\n");
            printf("\nNo re-checking\n");
        }
    }


    else if(marks>50 && marks<=60)
    {
        if(rechk==1)
        {
            printf("\nGrade:D-");
            printf("\nYour request for re-checking is accepted\n");
        }
        else
        {
            printf("\nGrade:D-\n");
            printf("\nNo re-checking\n");
        }
        }

    else
    {
        printf("\nInvalid inputs!\n");
    }


    return 0;
    
}