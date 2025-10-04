#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    for(int i=len-1;i>=0;i--){
        if(i%2!=0){
        printf("%c",str[i]);}
    }
    return 0;
}