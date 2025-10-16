#include <iostream>
using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];
int a[100000] = {0,};
int b[100000] = {0,};

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];
    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    int time = 0, posA = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t[i]; j++) {
            if (d[i] == 'R') posA++;
            else posA--;
            a[time++] = posA;
        }
    }

    int time2 = 0, posB = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < t2[i]; j++) {
            if (d2[i] == 'R') posB++;
            else posB--;
            b[time2++] = posB;
        }
    }

    int maxt = max(time, time2);
    for (int i = 0; i < maxt; i++) {
    if (a[i] == b[i]) {
        cout << i + 1;
        return 0;
    }
}

    cout << -1; 
    return 0;
}
