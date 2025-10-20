#include <iostream>
using namespace std;

int N, K;
int x[100];
char c[100];
int arr[10001] = {0,};

int main() {
    cin >> N >> K;
    int ma = 0;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
        if (c[i] == 'H') arr[x[i]] = 2;
        else if (c[i] == 'G') arr[x[i]] = 1;
        
    }
    for (int i = 1; i <= 10000-K; i++) {
        int cnt = 0;
        for (int j = i; j <= i + K; j++) {
            cnt += arr[j];
        }
        ma = max(ma, cnt);
    }

    cout << ma << endl;
    return 0;
}
