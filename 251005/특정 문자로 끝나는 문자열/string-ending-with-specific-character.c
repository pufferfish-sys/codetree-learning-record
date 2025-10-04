#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char list[10][21],c;
    int flag=0;
    for(int i=0;i<10;i++){
        scanf("%s",list[i]);
    }
    scanf(" %c",&c);
    for(int i=0;i<10;i++){
        if(c==list[i][strlen(list[i])-1]){
        printf("%s\n",list[i]);
        flag=1;}
    }
    if(flag==0)
    {printf("None");}
    return 0;
}