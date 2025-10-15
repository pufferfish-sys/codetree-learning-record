#include <iostream>
using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int square[200][200] = {0,};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = y1[i] + 100; j < y2[i] + 100; j++) {
            for (int k = x1[i] + 100; k < x2[i] + 100; k++) {
                square[j][k] = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            if (square[i][j] == 1) cnt++;
        }
    }

    cout << cnt;
    return 0;
}
