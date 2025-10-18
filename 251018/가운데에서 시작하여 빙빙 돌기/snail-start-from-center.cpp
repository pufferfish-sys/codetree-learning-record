#include <iostream>
using namespace std;

int n;
int arr[100][100] = {};
// 방향: 왼쪽, 위, 오른쪽, 아래 (반시계)
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int dir_num = 0;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;
    int x = n - 1, y = n - 1; // 오른쪽 아래에서 시작
    arr[x][y] = n * n;

    for (int i = n * n - 1; i > 0; i--) {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];
        if (!InRange(nx, ny) || arr[nx][ny] != 0) {
            dir_num = (dir_num + 1) % 4; // 방향 전환
        }
        x += dx[dir_num];
        y += dy[dir_num];
        arr[x][y] = i;
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
