#include <iostream>
using namespace std;

int N, M;
int r[10000], c[10000];
int grid[101][101] = {0,};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool InRange(int x, int y) {
    return (1 <= x && x <= N && 1 <= y && y <= M);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    for (int j = 0; j < M; j++) {
        grid[r[j]][c[j]] = 1; // 이번 칸 채우기

        int cnt = 0;
        for (int d = 0; d < 4; d++) {
            int nx = r[j] + dx[d];
            int ny = c[j] + dy[d];
            if (InRange(nx, ny) && grid[nx][ny] == 1)
                cnt++;
        }

        if (cnt >= 3) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}
