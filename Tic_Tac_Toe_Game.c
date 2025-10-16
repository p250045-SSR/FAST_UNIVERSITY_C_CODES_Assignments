#include<stdio.h>
int main()
{
    char A1=' ', A2=' ', A3=' ', B1=' ', B2=' ', B3=' ', C1=' ', C2=' ', C3=' ';
    int choice;
    char X,O;
    char player1=' ';
    char player2=' ';
    int turn=1;                                 //to keep track of turns
    
    printf("Enter X or 0 to start the game:\n");
    scanf(" %c",&player1);
    Start:
    if(player1==X)
    {
        player2='0';
        printf("Player 1's turn (X)\n");
        printf("Player 2's turn (0)\n");
    }
    else {
        player1='0';
        player2='X';
        printf("Player 1's turn (0)\n");
        printf("Player 2's turn (X)\n");
    }

    printf(" %c | %c | %c \n",A1,A2,A3);
    printf("-----------\n");
    printf(" %c | %c | %c \n",B1,B2,B3);
    printf("-----------\n");
    printf(" %c | %c | %c \n",C1,C2,C3);

    printf("Enter your move (1-9): ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if (A1!='O' && A1!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)               //if turn is odd, it's player 1's turn
                {
                    A1= player1;
                    turn++;
                }
                else if(turn%2==0)        //if turn is even, it's player 2's turn
                {
                    A1=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 2:
            if (A2!='O' && A2!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    A2=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    A2=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 3: 
            if (A3!='O' && A3!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    A3=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    A3=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 4:
            if (B1!='O' && B1!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    B1=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    B1=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 5:
            if (B2!='O' && B2!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    B2=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    B2=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 6:
            if (B3!='O' && B3!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    B3=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    B3=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 7:
            if (C1!='O' && C1!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    C1=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    C1=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 8:
            if (C2!='O' && C2!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    C2=player1;
                    turn++;
                }
                else if(turn%2==0)
                {
                    C2=player2;
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        case 9:
            if (C3!='O' && C3!='X')         //checking if the position is already filled
            {
                if(turn%2!=0)
                {
                    C3='O';
                    turn++;
                }
                else if(turn%2==0)
                {
                    C3='X';
                    turn++;
                }
            }
            else
            {
                printf("Invalid move, try again\n");
                goto Start;
            }
            break;
        default:
            printf("Invalid move, try again\n");
            goto Start;
    }
    printf(" %c | %c | %c \n",A1,A2,A3);
    printf("-----------\n");
    printf(" %c | %c | %c \n",B1,B2,B3);
    printf("-----------\n");
    printf(" %c | %c | %c \n",C1,C2,C3);

    if ((A1==A2 && A2==A3 && A1!=' ')||(B1==B2 && B2==B3 && B1!=' ')||(C1==C2 && C2==C3 && C1!=' ')||(A1==B1 && B1==C1 && A1!=' ')||(A2==B2 && B2==C2 && A2!=' ')||(A3==B3 && B3==C3 && A3!=' ')||(A1==B2 && B2==C3 && A1!=' ')||(A3==B2 && B2==C1 && A3!=' '))
    {
        if(turn%2==0)
        {
            printf("Player 1 wins!\n");
        }
        else
        {
            printf("Player 2 wins!\n");
        }
    }
    else if(turn>9)
    {
        printf("It's a draw!\n");
    }
    else
    {
        goto Start;
    }
    return 0;


}


