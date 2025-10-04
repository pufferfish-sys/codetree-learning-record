#include <stdio.h>

int main() {
    // Please write your code here.
    char list[10][201];
    for(int i=0;i<10;i++){
        scanf("%s",list[i]);
    }
    for(int i=0;i<10;i+=2){
        printf("%s\n",list[i]);
    }
    return 0;
}