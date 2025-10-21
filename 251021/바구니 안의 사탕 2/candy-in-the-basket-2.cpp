#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int candy[1001], pos[1001];
int loc[1001];  // 위치별 캔디 합

int main() {
    cin >> N >> K;
    int ma = 0;
    int maxPos = 0;

    // 입력
    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
        loc[pos[i]] += candy[i];  // 같은 위치 중복 누적
        maxPos = max(maxPos, pos[i]);
    }

    // 각 위치 i를 중심으로 K 범위 내 합 계산
    for (int i = 0; i <= maxPos; i++) {
        int cnt = 0;
        for (int j = max(0, i - K); j <= min(maxPos, i + K); j++) {
            cnt += loc[j];
        }
        ma = max(ma, cnt);
    }

    cout << ma;
    return 0;
}
