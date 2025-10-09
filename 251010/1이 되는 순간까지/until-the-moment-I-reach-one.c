#include <stdio.h>

int sumf(int N){
    if(N==1) return 0;
    if(N%2==0) return sumf(N/2)+1;
    else return sumf(N/3)+1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",sumf(n));
    return 0;
}