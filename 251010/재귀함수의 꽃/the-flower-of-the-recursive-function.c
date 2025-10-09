#include <stdio.h>

void num(int N){
    if(N==0) return;
    printf("%d ",N);
    num(N-1);
    printf("%d ",N);
}



int main() {
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}