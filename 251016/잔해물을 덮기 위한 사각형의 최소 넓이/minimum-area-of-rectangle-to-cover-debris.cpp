#include <iostream>
#include <algorithm>
using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int square[2000][2000] = {0,};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // 첫 번째 사각형을 칠함
    for (int i = x1[0] + 1000; i < x2[0] + 1000; i++) {
        for (int j = y1[0] + 1000; j < y2[0] + 1000; j++) {
            square[i][j] = 1;
        }
    }

    // 두 번째 사각형으로 덮음 (지움)
    for (int i = x1[1] + 1000; i < x2[1] + 1000; i++) {
        for (int j = y1[1] + 1000; j < y2[1] + 1000; j++) {
            square[i][j] = 0;
        }
    }

    // 남은 1들의 최소/최대 좌표 찾기
    int xmin = 2000, xmax = -1, ymin = 2000, ymax = -1,flag=0;
    for (int i = x1[0] + 1000; i < x2[0] + 1000; i++) {
        for (int j = y1[0] + 1000; j < y2[0] + 1000; j++) {
            if (square[i][j] == 1) {
                flag=1;
                xmin=min(xmin,i);
                xmax = max(xmax,i);
                ymin=min(ymin,j);
                ymax = max(ymax,j);
            }
        }
    }

    int area;
    if (!flag) area = 0;
    else area = (xmax - xmin + 1) * (ymax - ymin + 1);

    cout << area;
    return 0;
}
