#include <stdio.h>

void aff(int A,int B){
    int n=A;
    for(int i=0;i<B-1;i++){
        n*=A;
    }
    printf("%d",n);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    aff(a,b);
    // Please write your code here.
    return 0;
}