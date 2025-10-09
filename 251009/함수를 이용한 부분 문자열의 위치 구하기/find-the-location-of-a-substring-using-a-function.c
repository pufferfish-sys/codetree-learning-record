#include <stdio.h>
#include <string.h>
char text[1001];
char pattern[1001];
int scan(char *a,char *b){
    int len1=strlen(a),len2=strlen(b),cnt=0;
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(a[i+j]==b[j]){
                cnt++;
                if(cnt==len2){return i;}           
            }
            else{cnt=0;break;}
        }
    }
    return -1;
}


int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    int n = scan(text,pattern);
    printf("%d",n);
    return 0;
}