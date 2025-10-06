#include <stdio.h>
#include <string.h>

int main() {
    char arr[200][200];  // 최대 200개의 문자열, 각 200자
    int cnt = 0;

    while (1) {
        scanf("%s", arr[cnt]);
        if (strcmp(arr[cnt], "0") == 0) break;
        cnt++;
    }
    printf("%d\n", cnt);

    for (int i = 0; i < cnt; i++) {
        if (i % 2 == 0) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}
