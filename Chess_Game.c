#include <stdio.h>

int main() {
    char board[8][8] = {
        {'R','N','B','Q','K','B','N','R'},
        {'P','P','P','P','P','P','P','P'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'p','p','p','p','p','p','p','p'},
        {'r','n','b','q','k','b','n','r'}
    };
    
    int isGameOver = 0;
    int currentPlayer = 0; // 0 for white, 1 for black
    int fromRow, fromCol, toRow, toCol;
    
    while (!isGameOver) {
        // Print the board
        printf("\n   0 1 2 3 4 5 6 7\n");
        for (int i = 0; i < 8; i++) {
            printf("%d  ", i);
            for (int j = 0; j < 8; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
        
        // Get player input
        printf("\nPlayer %s's turn\n", currentPlayer == 0 ? "White" : "Black");
        printf("Enter source position (row col): ");
        scanf("%d %d", &fromRow, &fromCol);
        printf("Enter destination position (row col): ");
        scanf("%d %d", &toRow, &toCol);
        
        // Validate input
        if (fromRow < 0 || fromRow > 7 || fromCol < 0 || fromCol > 7 ||
            toRow < 0 || toRow > 7 || toCol < 0 || toCol > 7) {
            printf("Invalid position! Try again.\n");
            continue;
        }
        
        // Move piece
        char piece = board[fromRow][fromCol];
        board[fromRow][fromCol] = ' ';
        board[toRow][toCol] = piece;
        
        // Switch player
        currentPlayer = 1 - currentPlayer;
        
        // Simple way to end game (press -1)
        if (fromRow == -1) isGameOver = 1;
    }
    
    printf("Game Over!\n");
    return 0;
}