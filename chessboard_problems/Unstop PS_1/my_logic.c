#include <stdio.h>
#include <string.h>

const char* determine_color(const char* s) {
    // Write your logic here to determine the color based on the string s.
    // Return "Black" or "White" based on the problem statement.
    char chessboard[9][9];

    // Initializing Chessboard
    for(int i = 1 ; i <= 8 ; i++){
        for(int j = 1 ; j <= 8 ; j++){
        if(( i + j ) % 2 == 0){
            chessboard[i][j] = 0;
        }else{
            chessboard[i][j] = 1;
        }
        }
    }

    // Differentiating Input from char s to get column
    int letter = 0, position[1];
    while(s[letter] != '\0'){
        position[1] += s[letter];
        letter++;
    }

    int pos = position[0];
    position[0] = pos - 65;   

    // Checking Black and White Array.
    int i = position[0];
    int j = position[1];

    if(chessboard[i][j] == 0){
        return s = "Black";
    }else{
        return s = "White";
    }
}

int main() {
    char s[256];
    printf("\nEnter Num:\t");
    scanf("%s", s);
    const char* result = determine_color(s);
    printf("%s\n", result);
    return 0;
}