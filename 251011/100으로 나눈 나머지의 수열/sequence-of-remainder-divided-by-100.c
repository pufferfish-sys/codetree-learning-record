#include <stdio.h>

int aff(int n){
    if(n==1) return 2;
    if(n==2) return 4;
    return aff(n-1)*aff(n-2)%100;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d",aff(n));
    // Please write your code here.
    
    return 0;
}