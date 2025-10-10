#include <stdio.h>

int strange(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return strange(n-1)+strange(n/3);
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d",strange(n));
    
    return 0;
}