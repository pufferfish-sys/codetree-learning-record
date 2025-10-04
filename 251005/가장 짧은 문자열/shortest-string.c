#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20], c[20];

    // 문자열 입력
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    int a1 = strlen(a);  
    int b1 = strlen(b);  
    int c1 = strlen(c);  

    // 최대 길이 찾기
    int max = a1;
    if (b1 > max) max = b1;
    if (c1 > max) max = c1;

    // 최소 길이 찾기
    int min = a1;
    if (b1 < min) min= b1;
    if (c1 < min) min = c1;

    // 결과 출력
    printf("%d", max - min);

    return 0;
}
