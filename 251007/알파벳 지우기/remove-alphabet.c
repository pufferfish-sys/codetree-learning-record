#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char a[9], b[9],c[9],d[9];
    scanf("%s", a);
    scanf("%s", b);
    int n=0;
    for (int i = 0; i < strlen(a); i++) {
        if (isdigit(a[i])) {
            c[n] = a[i];
            n++;
        }
    }
    n=0;
    for (int i = 0; i < strlen(b); i++) {
        if (isdigit(b[i])) {
            d[n] = b[i];
            n++;
        }
    }
    printf("%d", atoi(c)+atoi(d));
    return 0;
}
