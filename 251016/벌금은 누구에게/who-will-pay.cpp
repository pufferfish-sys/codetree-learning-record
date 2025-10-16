#include <iostream>
using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;
    for (int i = 0; i < M; i++) cin >> student[i];

    for (int i = 0; i < N; i++) {
        if (student[i] >= K) {
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
