#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    int cnt = 0;
    scanf("%s", a);
    scanf("%s", b);
    int len = strlen(a);
    int len2 = strlen(b);

    for (int i = 0; i <= len - len2; i++) {
        for (int j = 0; j < len2; j++) {
            if (a[i + j] == b[j]) {
                cnt++;
                if (cnt == len2) {
                    //b를 제거하기 위해 뒤쪽 문자들을 앞으로 당김
                    for (int k = i + len2; k <= len; k++) {
                        a[k - len2] = a[k];
                    }
                    len -= len2;    // 길이 조정
                    i--;         // 전체 다시 탐색 
                    break;
                }
            } else {
                cnt = 0;  // 중간에 다르면 카운트 리셋
                break;
            }
        }
    }

    printf("%s", a);
    return 0;
}
