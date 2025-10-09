#include <stdio.h>

int aff(int N){
    if (N == 0) return 0;   // 0번째 항
    if (N == 1) return 1;   // 1번째 항
   return aff(N-1)+aff(N-2); 
}




int main() {
    int n;
    scanf("%d", &n);
    printf("%d",aff(n));
    // Please write your code here.
    
    return 0;
}