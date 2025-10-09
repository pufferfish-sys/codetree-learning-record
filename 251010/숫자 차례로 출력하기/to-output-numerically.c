#include <stdio.h>

void D1(int N) { // 오름차순
    if (N == 0) return;
    D1(N - 1);
    printf("%d ", N);
}

void D2(int N) { // 내림차순
    if (N == 0) return; 
    printf("%d ", N);
    D2(N - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    D1(n);
    printf("\n"); 
    D2(n);
    return 0;
}
