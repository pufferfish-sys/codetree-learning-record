#include <stdio.h>
#include <string.h>

typedef struct {
    char code_name;
    int score;
} User;

User users[5];

int main(){
    int i,min=101;
    for(i = 0; i < 5; i++){
        scanf(" %c %d", &users[i].code_name, &users[i].score);
    }
    for(int j=0;j<5;j++){
        if(users[j].score<min){
            min=users[j].score;
            i = j;
        }
    }
    printf("%c %d",users[i].code_name,users[i].score);
    
    
    return 0;
}