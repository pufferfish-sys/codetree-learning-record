#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    scanf("%s", a);
    scanf("%s", b);

    int n = strlen(a);
    int m = strlen(b);
    int res = 0;

    for (int i = 0; i < n; i++) {
        a[res++] = a[i];             
        if (res >= m) {             
            int match = 1;
            for (int j = 0; j < m; j++) {
                if (a[res - m + j] != b[j]) { match = 0; break; }
            }
            if (match) res -= m;
        }
    }
    a[res] = '\0';
    printf("%s", a);
    return 0;
}
