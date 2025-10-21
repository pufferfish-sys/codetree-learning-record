#include <iostream>
#include <algorithm>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

// 원형 다이얼 거리 계산
int circular_dist(int x, int y, int N) {
    int d = abs(x - y);
    return min(d, N - d);
}

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if ((circular_dist(a1, i, N) <= 2 &&
                     circular_dist(b1, j, N) <= 2 &&
                     circular_dist(c1, k, N) <= 2) ||
                    (circular_dist(a2, i, N) <= 2 &&
                     circular_dist(b2, j, N) <= 2 &&
                     circular_dist(c2, k, N) <= 2)) cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
