#include <stdio.h>
#include <string.h>

const char* determine_color(const char* s) {
    // Write your logic here to determine the color based on the string s.
    // Return "Black" or "White" based on the problem statement.
    char col = s[0];
    char row = s[1];

    int i = col - 'a';
    int j = row - 1;

    if((i + j) % 2 == 0){
        return "Black";
    }else{
        return "White";
    }
}

int main() {
    char s[256];
    scanf("%s", s);
    const char* result = determine_color(s);
    printf("%s\n", result);
    return 0;
}