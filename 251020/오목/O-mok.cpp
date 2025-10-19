#include <iostream>
using namespace std;

int board[19][19];

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++)
            cin >> board[i][j];

    // 1️⃣ 가로 검사
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 15; j++) {
            int stone = board[i][j];
            if (stone && stone == board[i][j+1] && stone == board[i][j+2] &&
                stone == board[i][j+3] && stone == board[i][j+4]) {
                cout << stone << '\n';
                cout << i + 1 << ' ' << j + 3 << '\n'; // 중앙
                return 0;
            }
        }
    }

    // 2️⃣ 세로 검사
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 19; j++) {
            int stone = board[i][j];
            if (stone && stone == board[i+1][j] && stone == board[i+2][j] &&
                stone == board[i+3][j] && stone == board[i+4][j]) {
                cout << stone << '\n';
                cout << i + 3 << ' ' << j + 1 << '\n'; // 중앙
                return 0;
            }
        }
    }

    // 3️⃣ 대각선 ↘ (오른쪽 아래)
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            int stone = board[i][j];
            if (stone && stone == board[i+1][j+1] && stone == board[i+2][j+2] &&
                stone == board[i+3][j+3] && stone == board[i+4][j+4]) {
                cout << stone << '\n';
                cout << i + 3 << ' ' << j + 3 << '\n'; // 중앙
                return 0;
            }
        }
    }

    // 4️⃣ 대각선 ↗ (오른쪽 위)
    for (int i = 4; i < 19; i++) {
        for (int j = 0; j < 15; j++) {
            int stone = board[i][j];
            if (stone && stone == board[i-1][j+1] && stone == board[i-2][j+2] &&
                stone == board[i-3][j+3] && stone == board[i-4][j+4]) {
                cout << stone << '\n';
                cout << i - 2 << ' ' << j + 3 << '\n'; // 중앙
                return 0;
            }
        }
    }

    cout << 0;
    return 0;
}
