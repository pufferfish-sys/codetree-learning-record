#include <stdio.h>

int ffa(int N){
    int sum=0;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum/10);
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    ffa(n);
    return 0;
}