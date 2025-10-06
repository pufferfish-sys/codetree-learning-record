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
    for (int i = 0; i < len / 2; i++) {
        char t = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = t;
    }
    printf("%s\n", s);
}
    }
    return 0;
}
