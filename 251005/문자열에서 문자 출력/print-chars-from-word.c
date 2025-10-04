#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[9];
    scanf("%s",str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        printf("%c\n",str[i]);
    }
    return 0;
}