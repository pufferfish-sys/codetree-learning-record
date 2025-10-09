#include <stdio.h>

int sumf(int N) {
    if (N == 0) return 0;
    return N + sumf(N - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumf(n));
    return 0;
}
