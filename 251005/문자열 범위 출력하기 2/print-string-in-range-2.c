#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[100];
    int n;
    scanf("%s",str);
    scanf("%d",&n);
    int len = strlen(str);
    for(int i=len-1;i>len-n-1;i--){
        printf("%c",str[i]);
    }
    return 0;
}