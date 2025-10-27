#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int num[100];       // 폭탄 숫자
    int exploded[1000000] = {0};  // 폭발 횟수 기록 (숫자 범위 1~1000)
    int visited[100];   // 중복 카운트 방지용

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++) {
        // visited 초기화
        for (int v = 0; v < N; v++) visited[v] = 0;

        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (num[i] == num[j] && abs(i - j) < K) {
                if (visited[i] == 0) { exploded[num[i]]++; visited[i] = 1; }
                if (visited[j] == 0) { exploded[num[j]]++; visited[j] = 1; }
            }
        }
    }

    // 가장 많이 폭발한 폭탄 찾기
    int max_count = 0;
    int result = 0;
    for (int i = 1; i <= 1000000; i++) {
        if (exploded[i] > max_count) {
            max_count = exploded[i];
            result = i;
        }
    }

    cout << result << endl;
    return 0;
}
