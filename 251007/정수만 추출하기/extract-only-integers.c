#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char a[9], b[9];
    scanf("%s", a);
    scanf("%s", b);
    for (int i = 0; i < strlen(a); i++) {
        if (!isdigit(a[i])) {
            a[i] = '\0';
            break;
        }
    }
    for (int i = 0; i < strlen(b); i++) {
        if (!isdigit(b[i])) {
            b[i] = '\0';
            break;
        }
    }
    printf("%d", atoi(a) + atoi(b));
    return 0;
}
