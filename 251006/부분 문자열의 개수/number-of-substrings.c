#include <stdio.h>
#include <string.h>

int main() {
    char a[1000];
    char b[10];  // 안전하게 여유 공간 확보
    int flag = 0;

    scanf("%s", a);
    scanf("%s", b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    for (int i = 0; i <= lenA - lenB; i++) {
        int match = 1;
        for (int j = 0; j < lenB; j++) {
            if (a[i + j] != b[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            flag++;  // 완전히 일치할 때만 카운트 증가
        }
    }

    printf("%d", flag);
    return 0;
}
