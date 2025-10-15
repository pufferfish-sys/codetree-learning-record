#include <iostream>
using namespace std;

int n;
int x[1000];
char dir[1000];

class Blocks {
public:
    int w_cnt, b_cnt;
    char c;
    Blocks() {}
    Blocks(int w_cnt, int b_cnt, char c) {
        this->w_cnt = w_cnt;
        this->b_cnt = b_cnt;
        this->c = c;
    }
};
Blocks block[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> dir[i];

    int spot = 50000;
    for (int i = 0; i < 100000; i++) block[i] = Blocks(0, 0, ' ');

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            for (int j = spot; j < spot + x[i]; j++) {
                block[j].b_cnt++;
                if (block[j].w_cnt >= 2 && block[j].b_cnt >= 2) block[j].c = 'G';
                else block[j].c = 'B';
            }
            spot += x[i] - 1;
        } else { // L
            for (int j = spot; j > spot - x[i]; j--) {
                block[j].w_cnt++;
                if (block[j].w_cnt >= 2 && block[j].b_cnt >= 2) block[j].c = 'G';
                else block[j].c = 'W';
            }
            spot -= x[i] - 1;
        }
    }

    int white = 0, black = 0, gray = 0;
    for (int i = 0; i < 100000; i++) {
        if (block[i].c == 'W') white++;
        else if (block[i].c == 'B') black++;
        else if (block[i].c == 'G') gray++;
    }

    cout << white << " " << black << " " << gray;
    return 0;
}
