#include <iostream>
#include <algorithm>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int blocks[2001][2001] = {0,};

int main() {

    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    int offset = 1000;

    // 첫 번째 직사각형 칠하기
    for(int i = x1[0] + offset; i < x2[0] + offset; i++){
        for(int j = y1[0] + offset; j < y2[0] + offset; j++){
            blocks[i][j] = 1;
        }
    }

    // 두 번째 직사각형으로 지우기
    for(int i = x1[1] + offset; i < x2[1] + offset; i++){
        for(int j = y1[1] + offset; j < y2[1] + offset; j++){
            blocks[i][j] = 0;
        }
    }

    int min_x = 2001;
    int min_y = 2001;
    int mx_x = -1;
    int mx_y = -1;
    bool found = false;

    for(int i = 0; i <= 2000; i++){
        for(int j = 0; j <= 2000; j++){
            if(blocks[i][j] == 1) {
                min_x = min(min_x, i);
                min_y = min(min_y, j);
                mx_x = max(mx_x, i);
                mx_y = max(mx_y, j);
                found = true;
            }
        }
    }

    if(found)
        cout << (mx_x - min_x + 1) * (mx_y - min_y + 1);
    else
        cout << 0;

    return 0;
}