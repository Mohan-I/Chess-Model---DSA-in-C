#include <stdio.h>
#include <stdlib.h>

void move_function(int n){
    
}

int main(){
    int chessboard[8][8] = {
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
    };

    // pawn position
    int p = 12;
    chessboard[0][4] = p;

    // queen position
    int q = 15;
    chessboard[7][3] = q;

    int choice;
    int row; 
    int col;
    while(1){
        // Displaying Chessboard
        for(int i = 0; i < 8; i++){
                for(int j=0; j< 8; j++){
                    printf("%d\t", chessboard[i][j]);
                    if(j == 7){
                    printf("\n");
                    }
                }
        }

        printf("\n\n----The ChessBoard Game in C----[Queen => 15 | Pawn => 12]\n");
        printf("1.Move Queen\t2.Move Pawn\t3. Exit\n");
        printf("Enter Choice:\t");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Enter Row_Column:");
            scanf("%d %d", &row, &col);
            
            q = 0;
            chessboard[row][col] = 15;
            q = 15;
            break;

            case 2:
            move_function(p);
            break;

            case 3:
            exit(0);
        }
    }
}
// 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 

