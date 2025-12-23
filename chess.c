#include <stdio.h>
#include <stdlib.h>
// #include <windows.h>

#define GREY "\x1B[30m"
#define REDD "\x1B[31m"
#define GREN "\x1B[32m"
#define YELL "\x1B[33m"
#define BLUE "\x1B[34m"
#define PINK "\x1B[35m"
#define AQUA "\x1B[36m"
#define NORM "\x1B[0m"

int main(){
    // SetConsoleOutputCP(65001);
    printf("\n\n##### CHESS GAME - BY MOHAN #####\n\n");
    // ♜│♞│♝│♛│♚│♝│♞│♜|♟ - BLACK PIECES
    // ♖│♘│♗│♕│♔│♗│♘│♖|♙ - WHITE PIECES
    char chessboard[8][8] ={0};
    char position[8] = {'A','B','C','D','E','F','G','H'};

    // INITIALIZE PAWN
    int p = 1;
    chessboard[1][2] = p;
    
    // INITIALIZE QUEEN
    int q = 9;
    chessboard[6][5] = q;

    // INITIALIZING QUEEN & PAWN TURN'S
    int turn = 0;

    int choice;
    while(1){
    printf("INDEX:\t");
    for(int col = 0; col < 8; col++){
        printf("%s[%d]",GREN, col);
    }
    printf("\n\n");

    for(int ix = 0; ix < 8; ix++){
        printf("%s%c\t",GREN, position[ix]);
        for(int iy = 0; iy < 8; iy++){
            if(chessboard[ix][iy] == 1){       
            printf("%s[%d]",GREY,chessboard[ix][iy]);
            }else if(chessboard[ix][iy] == 9){
            printf("%s[%d]",NORM,chessboard[ix][iy]);
            }else{
            printf("%s[%d]",BLUE,chessboard[ix][iy]);
            }
            if(iy == 7){
                printf("\n%s",NORM);
            }
        }
    }

    printf("\n 1.Ahead 2.Back 3.Exit Game");
    printf("\n 1. TOTAL MOVES WENT IN GAME: %d", turn);
    if(turn % 2 == 0){
        printf("\t%s[QUEEN'S TURN]",NORM);
    }else{
        printf("\t%s[PAWN'S TURN]%s",GREY,NORM);
    }
    turn++;
    printf("\n Enter Choice:\t");
    scanf("%d", &choice);

    switch(choice){
        case 3:
        exit(0);

        default: printf("\n %sWork in progress%s\n\n",REDD,NORM);
    }
    }
    

}

// Work in Progress !!