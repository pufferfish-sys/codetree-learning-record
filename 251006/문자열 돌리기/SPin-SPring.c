#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char s[20];
    scanf("%s",s);
    int len =strlen(s);
    printf("%s\n",s);
    for(int j=0;j<len;j++){
    char temp = s[len-1];
    for(int i=len-1;i>0;i--){
        s[i]=s[i-1];
    }
    s[0]=temp;
    printf("%s\n",s);
    }
    return 0;
}