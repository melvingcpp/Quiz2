//Tic Tac Toe game between 2 players or player vs computer
#include <stdio.h>

void pvpgame();
void pvegame();

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
int playing = 1; //1 = playing, 0 = game ended
int terminate = 0; //0 = still going, 1 = terminate program

int main(){
    
    int choice;

    //loop continues until user would like to stop playing
    while (terminate != 1){
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
            //printf("pvp working");
            //Have a loop that continues to display the board until a winner or tie occurs
            while (playing == 1){
                pvpgame();
                terminate = 1;
            }
        }
        else if (choice == 2){
            printf("\n================================");
            printf("\nYou have entered choice 2");
            //printf ("pve working");
            while (playing == 1){
                pvegame();
                terminate = 1;
            }
        }
        else{
            printf("invalid input");
        }


        //Ends game and asks if player would like to play again


        //restarts game if player wants to play again
        }


    /*

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
        //printf("pvp working");
        //Have a loop that continues to display the board until a winner or tie occurs
        while (playing == 1){
            pvpgame();
        }
    }
    else if (choice == 2){
        printf("\n================================");
        printf("\nYou have entered choice 2");
        //printf ("pve working");
        while (playing == 1){
            pvegame();
        }
    }
    else{
        printf("invalid input");
    }


    //Ends game and asks if player would like to play again


    //restarts game if player wants to play again

    */

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


    playing = 0;
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


    playing = 0;
}