#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], c[1000];
    int flag = -1;

    scanf("%s", a);
    scanf("%s", c);

    int lenA = strlen(a);
    int lenC = strlen(c);

    for (int i = 0; i <= lenA - lenC; i++) {
        int match = 1;
        for (int j = 0; j < lenC; j++) {
            if (a[i + j] != c[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            flag = i;
            break;
        }
    }
    printf("%d", flag);
    return 0;
}
