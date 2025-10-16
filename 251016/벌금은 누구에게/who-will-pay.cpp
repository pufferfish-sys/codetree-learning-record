#include <iostream>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    int count[10001] = {0}; // 학생 번호 최대 10000까지 대응

    int ans = -1;
    for (int i = 0; i < M; i++) {
        int s;
        cin >> s;
        count[s]++;
        if (count[s] >= K && ans == -1) {
            ans = s; // 최초로 K번 이상 된 학생 저장
        }
    }

    cout << ans << endl;
    return 0;
}
