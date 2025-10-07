#include <stdio.h>

int n1, n2;
int a[100], b[100];

void aff() {
    int n = 0;
    for (int i = 0; i < n1; i++) {
        if (a[i] == b[n]) {
            n++;
            if (n == n2) {
                printf("Yes\n");
                return;
            }
        } else {
            if (n > 0) i -= n;
            n = 0;
        }
    }
    printf("No\n");
}


int main() {
    scanf("%d %d", &n1, &n2);
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    aff();
    return 0;
}
