#include <stdio.h>

int aff(int n){
    if(n==1) return 0;
    if(n%2==0) return aff(n/2)+1;
    else return aff(n*3+1)+1;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d",aff(n));
    // Please write your code here.
    
    return 0;
}