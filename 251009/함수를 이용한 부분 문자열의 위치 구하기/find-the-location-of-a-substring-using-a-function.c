#include <stdio.h>
#include <string.h>

char text[1001];
char pattern[1001];

int scan(char *a, char *b) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (a[i + j] != b[j]) break;
        }
        if (j == len2) return i;
    }
    return -1;
}

int main() {
    scanf("%s", text);
    scanf("%s", pattern);
    int n = scan(text, pattern);
    printf("%d", n);
    return 0;
}
