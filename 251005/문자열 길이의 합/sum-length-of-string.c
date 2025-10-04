#include <stdio.h>
#include <string.h>

int main() {
    char list[10][101];
    int n, cnt = 0, sum = 0;

    scanf("%d", &n);
    // 문자열 입력
    for(int i = 0; i < n; i++) {
        scanf("%s", list[i]);
    }

    for(int i = 0; i < n; i++) {
        int len = strlen(list[i]);
        sum += len;
        for(int j = 0; j < len; j++) {
            if(list[i][j] == 'a') cnt++;
        }
    }

    printf("%d %d", sum, cnt);

    return 0;
}
