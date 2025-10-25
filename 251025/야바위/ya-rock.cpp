#include <iostream>
#include <algorithm>
using namespace std;

int N;
int a[100], b[100], c[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int ma[4] = {0,};

    for (int i = 1; i <= 3; i++) {
        int cnt = 0;
        int stone[4] = {0,};
        stone[i] = 1;

        for (int j = 0; j < N; j++) {
            int temp = stone[b[j]];
            stone[b[j]] = stone[a[j]];
            stone[a[j]] = temp;
            if (stone[c[j]] == 1) cnt++;
        }
        ma[i] = cnt;
    }

    // 최댓값 구하기
    int max_val = max({ma[1], ma[2], ma[3]});

    // 그 최댓값을 가진 초기 위치 출력
    for (int i = 1; i <= 3; i++) {
        if (ma[i] == max_val) {
            cout << i << '\n';
        }
    }

    return 0;
}
