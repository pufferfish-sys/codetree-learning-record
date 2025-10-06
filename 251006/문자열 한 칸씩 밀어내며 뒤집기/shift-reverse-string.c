#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char s[1000];
    int q,n;
    scanf("%s",s);
    scanf("%d ",&q);
    int len =strlen(s);
    for(int i=0;i<q;i++){
        scanf("%d ",&n);
        if(n==1){
    char temp = s[0];
    for(int i=0;i<len-1;i++){
        s[i]=s[i+1];
    }
    s[len-1]=temp;
    printf("%s\n",s);
    }
    else if(n==2){
    char temp = s[len-1];
    for(int i=len-1;i>0;i--){
        s[i]=s[i-1];
    }
    s[0]=temp;
    printf("%s\n",s);
    }
else {
    char temp[1000];
    strcpy(temp, s);
    for (int i = 0; i < len; i++) {
        s[i] = temp[len - 1 - i];
    }
    s[len] = '\0'; // 문자열 끝 표시 필수!
    printf("%s\n", s);
}

    }
    return 0;
}
