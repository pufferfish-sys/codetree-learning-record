#include <stdio.h>
#include <string.h>

int main() {
    char a[100],b[100],c[200],d[200];
    
    scanf("%s", a);
    scanf("%s", b);

    strcpy(c, a);
    strcat(c, b);

    strcpy(d, b);
    strcat(d, a);

    if (strcmp(c, d) == 0) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
