#include <stdio.h>

typedef struct {
    char unlock_code[11];
    char linear_color;
    int time;
} Bomb;

int main(){
    Bomb b;
    scanf("%s %c %d", b.unlock_code, &b.linear_color, &b.time);
    printf("code : %s\ncolor : %c\nsecond : %d",b.unlock_code, b.linear_color, b.time);
    
    return 0;
}