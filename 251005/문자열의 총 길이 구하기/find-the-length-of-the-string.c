#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[10][200];
    int sum=0;
    for(int i=0;i<10;i++){
    scanf("%s",str[i]);}
    for(int i=0;i<10;i++){
        sum+=strlen(str[i]);
    }
    printf("%d",sum);
    return 0;
}