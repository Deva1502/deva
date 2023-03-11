#include <stdio.h>

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int player = 1, choice, row, column;

    do {
        // print board
        printf("\n");
        printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
        printf("-----------\n");
        printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
        printf("-----------\n");
        printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);

        // get player's move
        printf("\nPlayer %d, enter a number between 1 and 9 to make your move: ", player);
        scanf("%d", &choice);

        // calculate row and column of move
        row = (choice - 1) / 3;
        column = (choice - 1) % 3;

        // check if move is valid
        if (board[row][column] == 'X' || board[row][column] == 'O') {
            printf("Invalid move. Please try again.\n");
            continue;
        }

        // make move
        if (player == 1) {
            board[row][column] = 'X';
            player = 2;
        } else {
            board[row][column] = 'O';
            player = 1;
        }
int i;
        // check for winner
        for (i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                printf("\nPlayer %d wins!\n", player == 1 ? 2 : 1);
                return 0;
            } else if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
                printf("\nPlayer %d wins!\n", player == 1 ? 2 : 1);
                return 0;
            }
        }

        if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            printf("\nPlayer %d wins!\n", player == 1 ? 2 : 1);
            return 0;
        } else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            printf("\nPlayer %d wins!\n", player == 1 ? 2 : 1);
            return 0;
        }

    } while (1);

    return 0;
}
