#include <stdio.h>
#include <string.h>

int main() {
    char a[100];  // 원본 문자열
    char b[100];  // 제거할 부분 문자열
    scanf("%s", a);  // 문자열 a 입력
    scanf("%s", b);  // 문자열 b 입력

    int n = strlen(a);  // a의 길이
    int m = strlen(b);  // b의 길이
    int cnt = 0;        // 결과 문자열의 현재 길이 (스택의 top 역할)

    // a의 각 문자를 차례대로 확인
    for (int i = 0; i < n; i++) {
        a[cnt++] = a[i];  // 현재 문자를 결과 배열에 추가(push)

        // 결과 문자열 길이가 b보다 길거나 같을 때만 비교 가능
        if (cnt >= m) {
            int flag = 1;  // 일치 여부 표시용 변수
            // 최근에 추가된 부분이 b와 같은지 확인
            for (int j = 0; j < m; j++) {
                if (a[cnt - m + j] != b[j]) {  
                    flag = 0;  // 한 글자라도 다르면 실패
                    break;
                }
            }
            // 최근에 추가된 부분이 b와 일치하면 삭제(pop)
            if (flag)
                cnt -= m;  // b의 길이만큼 스택에서 제거
        }
    }

    a[cnt] = '\0';  // 문자열 끝 표시
    printf("%s", a);  // 최종 결과 출력

    return 0;
}
