#include <stdio.h>

int cnt=0;

int sumf(int N){

    if(N==1) return cnt;
    cnt++;
    if(N%2==0) sumf(N/2);
    else sumf(N/3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",sumf(n));
    return 0;
}