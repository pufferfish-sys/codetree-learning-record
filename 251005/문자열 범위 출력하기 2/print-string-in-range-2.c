#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;
    scanf("%s", str);
    scanf("%d", &n);
    int len = strlen(str);
    if(n > len) n = len; 
    for(int i = len - 1; i >= len - n; i--) {
        printf("%c", str[i]);
    }
    return 0;
}