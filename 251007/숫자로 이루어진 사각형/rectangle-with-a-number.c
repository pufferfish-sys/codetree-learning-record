#include <stdio.h>

void star(int n){
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",cnt);
        cnt++;
        if(cnt==10)cnt=1;
        }printf("\n");
   }
}

int main() {
    int N;
    scanf("%d", &N);
    star(N);
    return 0;
}