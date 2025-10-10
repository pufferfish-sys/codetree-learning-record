#include <stdio.h>

int n1(int n){
    if(n==2) return n;
    if(n==1) return n;
    return n+n1(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",n1(n));
    
    return 0;
}