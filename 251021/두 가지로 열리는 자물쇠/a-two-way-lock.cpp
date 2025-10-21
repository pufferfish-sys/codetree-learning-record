#include <iostream>
#include <algorithm>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

// 원형 다이얼 거리 계산
int calc(int x, int y) {
    return min(abs(x - y), N - abs(x - y));
}

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if ((calc(a1, i) <= 2 &&
                     calc(b1, j) <= 2 &&
                     calc(c1, k) <= 2) ||
                    (calc(a2, i) <= 2 &&
                     calc(b2, j) <= 2 &&
                     calc(c2, k) <= 2)) cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
