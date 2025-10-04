#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[100],c;
    int cnt=0;
    fgets(str,100,stdin);
    scanf("%c",&c);
    for(int i=0;i<strlen(str);i++){
        if(c==str[i]){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}