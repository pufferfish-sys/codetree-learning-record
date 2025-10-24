#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int T, a, b;
    cin >> T >> a >> b;

    char c[100];
    int x[100];
    char loc[1001] = {};

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
        loc[x[i]] = c[i];
    }

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        int d1 = INT_MAX, d2 = INT_MAX;

        for (int j = 0; j < T; j++) {
            if (c[j] == 'S') d1 = min(d1, abs(x[j] - i));
            if (c[j] == 'N') d2 = min(d2, abs(x[j] - i));
        }

        if (d1 <= d2) cnt++;
    }

    cout << cnt;
    return 0;
}
