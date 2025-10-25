#include <iostream>
#include <string>

using namespace std;

string inp[3];

int main() {
    // 입력
    for (int i = 0; i < 3; i++) cin >> inp[i];

    int cnt = 0;

    // 팀 숫자 조합 i, j (1~9)
    for (int i = 1; i <= 9; i++) {
        for (int j = i + 1; j <= 9; j++) {

            // 가로 검사
            for (int k = 0; k < 3; k++) {
                int cnt_i = 0, cnt_j = 0;
                for (int l = 0; l < 3; l++) {
                    if (inp[k][l] == i + '0') cnt_i++;
                    if (inp[k][l] == j + '0') cnt_j++;
                }
                if (cnt_i + cnt_j >= 3&& cnt_i>0&&cnt_j>0) cnt++; // 두 숫자 모두 존재하면 팀 승리
            }

            // 세로 검사
            for (int l = 0; l < 3; l++) {
                int cnt_i = 0, cnt_j = 0;
                for (int k = 0; k < 3; k++) {
                    if (inp[k][l] == i + '0') cnt_i++;
                    if (inp[k][l] == j + '0') cnt_j++;
                }
                if (cnt_i + cnt_j >= 3&& cnt_i>0&&cnt_j>0) cnt++;
            }

            // 대각선 검사 (왼쪽 위 → 오른쪽 아래)
            int cnt_i = 0, cnt_j = 0;
            for (int d = 0; d < 3; d++) {
                if (inp[d][d] == i + '0') cnt_i++;
                if (inp[d][d] == j + '0') cnt_j++;
            }
            if (cnt_i + cnt_j >= 3&& cnt_i>0&&cnt_j>0) cnt++;

            // 대각선 검사 (오른쪽 위 → 왼쪽 아래)
            cnt_i = 0; cnt_j = 0;
            for (int d = 0; d < 3; d++) {
                if (inp[d][2 - d] == i + '0') cnt_i++;
                if (inp[d][2 - d] == j + '0') cnt_j++;
            }
            if (cnt_i + cnt_j >= 3&& cnt_i>0&&cnt_j>0) cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
