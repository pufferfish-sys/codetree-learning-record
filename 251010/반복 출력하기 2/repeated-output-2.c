#include <stdio.h>

void star(int N){
    if(N==0) return;
    star(N-1);
    printf("HelloWorld\n");
}



int main() {
    int n;
    scanf("%d", &n);
    star(n);
    // Please write your code here.
    
    return 0;
}