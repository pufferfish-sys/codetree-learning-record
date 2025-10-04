#include <stdio.h>
#include <string.h>

int main() {
    char a[1000];
    char b[1000];
    scanf("%s", a);
    int len = strlen(a);
    int i = 0, c = 0;
    while (i < len) {
        int cnt = 0;
        while (c < len && a[i] == a[c]) {
            c++;
            cnt++;
        }
        char temp[5];
        sprintf(temp, "%c%d", a[i], cnt);
        strcat(b, temp); 
        i = c;
    }
    printf("%d\n%s",strlen(b),b);  // 압축 결과 출력
    return 0;
}