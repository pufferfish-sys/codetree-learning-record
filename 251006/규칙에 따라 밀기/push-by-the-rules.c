#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char s[1000],q[100];
    scanf("%s",s);
    scanf("%s ",&q);
    int len =strlen(s);
    int lenq=strlen(q);
    for(int i=0;i<lenq;i++){
        if(q[i]=='L'){
    char temp = s[0];
    for(int i=0;i<len-1;i++){s[i]=s[i+1];}
    s[len-1]=temp;}
    else if(q[i]=='R'){
    char temp = s[len-1];
    for(int i=len-1;i>0;i--){
        s[i]=s[i-1];
    }
    s[0]=temp;}}    
    printf("%s\n",s);
    return 0;
}
