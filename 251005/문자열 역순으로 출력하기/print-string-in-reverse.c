#include <stdio.h>

int main() {
    char str[4][20];
    for(int i=0;i<4;i++){
        scanf("%s",str[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%s\n",str[i]);
    }



    return 0;
}