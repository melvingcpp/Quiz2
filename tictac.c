//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>

void pvpgame();
void pvegame();

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
int playing = 1; //1 = playing, 0 = game ended
int terminate = 1; //1 = still going, 0 = terminate program

int main(){
    
    int choice, move1, move2; //holds the players choices and moves
    int player = 1; //keeps track of which player is making a move
    int tie = 1; // keeps track if there is a tie, 0 = no tie, 1 = tie

    //loop continues until user would like to stop playing
    while (terminate == 1){
        //prompt user for game they wish to play

        printf("\n================================");
        printf("\nWELCOME TO TIC TAC TOE!");
        printf("\n1 --- person vs. person");
        printf("\n2 --- person vs. random computer");
        printf("\nEnter your choice (1 or 2): ");

        //read information from console 

        scanf("%d", &choice);

        //Begin whichever version of the game is chosen

        if (choice == 1){
            printf("\n================================");
            printf("\nYou have entered choice 1");

            //Have a loop that continues to display the board until a winner or tie occurs
            while (playing == 1){
                pvpgame();

                printf("\nPlayer%d: make your move", player);

                scanf("%d %d", &move1, &move2);


                if(player % 2 == 1 && board[move1 - 1][move2 - 1] == ' '){
                    board[move1 - 1][move2 - 1] = 'X';
                    printf("\nGood!");
                    player++;
                }
                else if (board[move1 - 1][move2 - 1] == ' '){
                    board[move1 - 1][move2 - 1] = 'O';
                    printf("\nGood!");
                    player--;
                }
                else{
                    printf("\ninvalid move, please try again");
                }

                //loops and checks if any player has won
                for (int i = 0; i < 3; i++){
                    if (board[i][0] != ' ' && board[i][1] != ' ' && board[i][2] != ' '){
                        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]){
                            if (player % 2 == 1){
                                printf("\nPlayer 2 wins!");
                                playing = 0;
                            }
                            else{
                                printf("\nPlayer 1 wins!");
                                playing = 0;
                            }
                        }
                    }
                }

                for (int i = 0; i < 3; i++){
                    if (board[0][i] != ' ' && board[1][i] != ' ' && board[2][i] != ' '){
                        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]){
                            if (player % 2 == 1){
                                printf("\nPlayer 2 wins!");
                                playing = 0;
                            }
                            else{
                                printf("\nPlayer 1 wins!");
                                playing = 0;
                            }
                        }
                    }
                }

                if (board[0][0] != ' ' && board[1][1] != ' ' && board[2][2] != ' '){
                    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]){
                        if (player % 2 == 1){
                            printf("\nPlayer 2 wins!");
                            playing = 0;
                            }
                        else{
                            printf("\nPlayer 1 wins!");
                            playing = 0;
                        }
                    }
                }

                if (board[0][2] != ' ' && board[1][1] != ' ' && board[2][0] != ' '){
                    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]){
                        if (player % 2 == 1){
                            printf("\nPlayer 2 wins!");
                            playing = 0;
                            }
                        else{
                            printf("\nPlayer 1 wins!");
                            playing = 0;
                        }
                    }
                }

                //checks if there is tie
                for (int i = 0; i < 3; i++){
                    for (int j = 0; j < 3; j++){
                        if (board[i][j] == ' '){
                            tie = 0;
                        }
                    }
                }
                //if tie, end game
                if (tie == 1 && playing == 1){
                    printf("\nTie, no winner!");
                    playing = 0;
                }

                tie = 1;
            }

        }
        else if (choice == 2){
            printf("\n================================");
            printf("\nYou have entered choice 2");
            //printf ("pve working");
            while (playing == 1){
                pvegame();

                printf("\nMake your move:");

                scanf("%d %d", &move1, &move2);
                terminate = 0;
            }
        }
        else{
            printf("\ninvalid input");
        }


        //Ends game and asks if player would like to play again
        printf("\nWould you like to play again?\n0 = No\n1 = Yes");
        scanf("%d", &terminate);

        //restarts game if player wants to play again
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                board[i][j] = ' ';
            }
        }

        playing = 1;
        player = 1;
        tie = 0;
        }

    return 0;
}

void pvpgame(){
    printf("\nThe current status is: ");
    printf("\n+-----------+");
    printf("\n| %c | %c | %c |", board[0][0], board[0][1], board[0][2]);
    printf("\n+-----------+");
    printf("\n| %c | %c | %c |", board[1][0], board[1][1], board[1][2]);
    printf("\n+-----------+");
    printf("\n| %c | %c | %c |", board[2][0], board[2][1], board[2][2]);
    printf("\n+-----------+");


    //playing = 0;
}

void pvegame(){
    printf("\nThe current status is: ");
    printf("\n+-----------+");
    printf("\n| %c | %c | %c |", board[0][0], board[0][1], board[0][2]);
    printf("\n+-----------+");
    printf("\n| %c | %c | %c |", board[1][0], board[1][1], board[1][2]);
    printf("\n+-----------+");
    printf("\n| %c | %c | %c |", board[2][0], board[2][1], board[2][2]);
    printf("\n+-----------+");


    //playing = 0;
}