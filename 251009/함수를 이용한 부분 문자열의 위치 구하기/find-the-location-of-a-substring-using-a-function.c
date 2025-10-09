#include <stdio.h>
#include <string.h>
char text[1001];
char pattern[1001];
void scan(char *a,char *b){
    int len1=strlen(a),len2=strlen(b),cnt=0;
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(a[i+j]==b[j]){
                cnt++;
                if(cnt==len2){printf("%d",i); return;}           
            }
            else{cnt=0;break;}
        }
    }
    printf("-1");
    return;
}


int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    scan(text,pattern);
    
    return 0;
}