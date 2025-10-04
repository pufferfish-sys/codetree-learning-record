#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here..
    char list[10][101];
    int n,cnt=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",list[i]);
    }
    for(int i=0;i<n;i++){
            if(list[i][0]=='a')cnt++;
        
    }
    for(int i=0;i<n;i++){
        sum+=strlen(list[i]);
    }
    printf("%d %d",sum,cnt);
    return 0;
}