#include <stdio.h>

void star(int N){
    if(N==0) return;
    for(int i=0;i<N;i++){
        printf("* ");
    }
    printf("\n");
    star(N-1);
    for(int i=0;i<N;i++){
        printf("* ");
    }printf("\n");
}



int main() {
    int n;
    scanf("%d", &n);
    star(n);
    // Please write your code here.
    
    return 0;
}