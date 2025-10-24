#include <iostream>
#include <algorithm>
using namespace std;

int n;
int h[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> h[i];

    int max1 = 0;
    for (int i = 1; i <= 1000; i++) {
        int cnt = 0;
        bool inBlock = false;

        for (int j = 0; j < n; j++) {
            if (h[j] > i) {
                if (!inBlock) {
                    cnt++;         // 새로운 블록 시작
                    inBlock = true;
                }
            } else {
                inBlock = false;   // 블록 끝
            }
        }
        max1 = max(max1, cnt);
    }

    cout << max1;
    return 0;
}
