#include <iostream>
#include <string>
using namespace std;

string inp[3];

int main() {
    for (int i = 0; i < 3; i++) cin >> inp[i];

    int cnt = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = i + 1; j <= 9; j++) {
            bool win = false;

            for (int k = 0; k < 3; k++) {
                int cnt_i = 0, cnt_j = 0;
                for (int l = 0; l < 3; l++) {
                    if (inp[k][l] == i + '0') cnt_i++;
                    else if (inp[k][l] == j + '0') cnt_j++;
                }
                if (cnt_i + cnt_j >= 3 && cnt_i > 0 && cnt_j > 0) win = true;
            }

            // 세로
            for (int l = 0; l < 3; l++) {
                int cnt_i = 0, cnt_j = 0;
                for (int k = 0; k < 3; k++) {
                    if (inp[k][l] == i + '0') cnt_i++;
                    else if (inp[k][l] == j + '0') cnt_j++;
                }
                if (cnt_i + cnt_j >= 3 && cnt_i > 0 && cnt_j > 0) win = true;
            }

            // 대각선 1
            int cnt_i = 0, cnt_j = 0;
            for (int d = 0; d < 3; d++) {
                if (inp[d][d] == i + '0') cnt_i++;
                else if (inp[d][d] == j + '0') cnt_j++;
            }
            if (cnt_i + cnt_j >= 3 && cnt_i > 0 && cnt_j > 0) win = true;

            // 대각선 2
            cnt_i = 0; cnt_j = 0;
            for (int d = 0; d < 3; d++) {
                if (inp[d][2 - d] == i + '0') cnt_i++;
                else if (inp[d][2 - d] == j + '0') cnt_j++;
            }
            if (cnt_i + cnt_j >= 3 && cnt_i > 0 && cnt_j > 0) win = true;

            if (win) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
