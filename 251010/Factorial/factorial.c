#include <stdio.h>

int fact(int n){
    if(n==1) return 1;
    return fact(n-1)*n;
}


int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d",fact(n));
    // Please write your code here.
    
    return 0;
}