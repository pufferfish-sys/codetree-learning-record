#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m,l,cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d ",&l);
        if(l==m){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}