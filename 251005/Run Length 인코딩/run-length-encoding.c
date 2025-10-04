#include <stdio.h>
#include <string.h>

int main() {
    char a[1000];
    scanf("%s", a);
    int len = strlen(a);
    int i = 0, c = 0, length = 0;
    
    while (i < len) {
        int cnt = 0;
        while (c < len && a[i] == a[c]) {
            c++;
            cnt++;}
        int b;
        if (cnt < 10) b = 1;
        else if (cnt < 100) b = 2;
        else if (cnt < 1000) b = 3;
        else b = 4;
        length += 1 + b;
        i = c;
    }
    printf("%d\n", length);
    i = 0; c = 0;
    while (i < len) {
        int cnt = 0;
        while (c < len && a[i] == a[c]) {
            c++;
            cnt++;
        }
        printf("%c%d", a[i], cnt);
        i = c;
    }
    return 0;
}
