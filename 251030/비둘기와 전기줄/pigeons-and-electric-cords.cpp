#include <iostream>

using namespace std;

int N;
int pigeon[100];
int position[100];
int lastPos[11]; // 1~10번 비둘기 위치 저장

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }

    for (int i = 1; i <= 10; i++) lastPos[i] = -1;

    int count = 0;

    for (int i = 0; i < N; i++) {
        int bird = pigeon[i];
        int pos = position[i];

        if (lastPos[bird] == -1) {
            lastPos[bird] = pos;
        } else {
            if (lastPos[bird] != pos) {
                count++;
                lastPos[bird] = pos;
            }
        }
    }

    cout << count << endl;
    return 0;
}
