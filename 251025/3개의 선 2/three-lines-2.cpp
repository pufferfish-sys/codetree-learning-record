#include <iostream>
using namespace std;

int n;
int x[20], y[20];
int x_n[101] = {0,}, y_n[101] = {0,};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        x_n[x[i]]++;
        y_n[y[i]]++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x_n[x[i]] < 2 && y_n[y[i]] < 2)
            cnt++;
    }

    cout << (cnt >= 3 ? 0 : 1);
    return 0;
}
