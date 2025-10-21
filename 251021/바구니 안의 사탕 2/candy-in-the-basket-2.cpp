#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int candy[100], pos[100];
int loc[100];

int main() {
    cin >> N >> K;
    int ma = 0;

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
        loc[pos[i]] = candy[i];
    }

    for (int i = 0; i < 100; i++) {
        int cnt = 0;
        for (int j = max(0, i - K); j <= min(99, i + K); j++) {
            cnt += loc[j];
        }
        ma = max(ma, cnt);
    }

    cout << ma;
    return 0;
}
