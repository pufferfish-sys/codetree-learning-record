#include <stdio.h>

void aff(int N){
    int sum = N/10 + N%10 ;
    if(N%2==0&&sum%5==0){
        printf("Yes");
    }
    else printf("No");
}

int main() {
    int n;
    scanf("%d", &n);
    aff(n);
    
    return 0;
}