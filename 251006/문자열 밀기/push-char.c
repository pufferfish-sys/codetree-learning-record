#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char s[20];
    scanf("%s",s);
    int len =strlen(s);
    char temp = s[0];
    for(int i=0;i<len-1;i++){
        s[i]=s[i+1];
    }
    s[len-1]=temp;
    printf("%s",s);
    return 0;
}