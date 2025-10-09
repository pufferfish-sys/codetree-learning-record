#include <stdio.h>

int sumf(int N){
    if(N<10) return N*N;
    return sumf(N/10)+(N%10)*(N%10);    
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d",sumf(n));
    // Please write your code here.
    return 0;
}