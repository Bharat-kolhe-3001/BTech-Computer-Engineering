#include <stdio.h>

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if there's a winner
char checkWinner(char board[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
            return board[0][j];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];
    // No winner yet
    return ' ';
}

// Function to simulate AI move (random move)
void makeAIMove(char board[3][3]) {
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] != ' ');
    board[row][col] = 'O';
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int turn = 0; // Player X starts

    while (1) {
        printBoard(board);

        if (turn == 0) {
            int row, col;
            printf("Enter row and column for your move (1-3): ");
            scanf("%d %d", &row, &col);
            row--; col--; // Adjusting to array indexing
            if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
                board[row][col] = 'X';
                turn = 1;
            } else {
                printf("Invalid move. Try again.\n");
                continue;
            }
        } else {
            makeAIMove(board);
            turn = 0;
        }

        char winner = checkWinner(board);
        if (winner != ' ') {
            printBoard(board);
            if (winner == 'X')
                printf("Congratulations! You win!\n");
            else
                printf("AI wins! Better luck next time!\n");
            break;
        }

        // Check for draw
        int draw = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    draw = 0;
                    break;
                }
            }
            if (!draw) break;
        }
        if (draw) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}
