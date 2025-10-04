#include <stdio.h>

int main() {
    // Please write your code here.
    char list[5][10] ={"apple","banana","grape","blueberry","orange"};
    char c;int cnt=0;
    scanf("%c",&c);
    for(int i=0;i<5;i++){
            if(c==list[i][2]||c==list[i][3]){
                printf("%s\n",list[i]);
                cnt++;
            }
    }
    printf("%d",cnt);
    return 0;
}