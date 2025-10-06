#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    scanf("%s", a);
    scanf("%s", b);

    int n = strlen(a);
    int m = strlen(b);
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        a[cnt++] = a[i];             
        if (cnt >= m) {             
            int flag = 1;
            for (int j = 0; j < m; j++) {
                if (a[cnt - m + j] != b[j]) { flag = 0; break; }
            }
            if (flag) cnt -= m;
        }
    }
    a[cnt] = '\0';
    printf("%s", a);
    return 0;
}
