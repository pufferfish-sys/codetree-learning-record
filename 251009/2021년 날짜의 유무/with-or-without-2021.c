#include <stdio.h>

void month(int M, int m) {
    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) {
        if (m >= 1 && m <= 31) {
            printf("Yes");
            return;
        }
    } 
    else if (M == 2) {
        if (m >= 1 && m <= 28) {
            printf("Yes");
            return;
        }
    } 
    else if (M == 4 || M == 6 || M == 9 || M == 11) {
        if (m >= 1 && m <= 30) {
            printf("Yes");
            return;
        }
    }
    printf("No");
}

int main() {
    int M, m;
    scanf("%d %d", &M, &m);
    month(M, m);
    return 0;
}
