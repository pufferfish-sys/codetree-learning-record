#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> h[i];

    int ans = 10000000;

    
    for (int L = 0; L <= 83; L++) {
        int R = L + 17;
        int cost = 0;

        for (int i = 0; i < N; i++) {
            if (h[i] < L) cost += (L - h[i]) * (L - h[i]);
            else if (h[i] > R) cost += (h[i] - R) * (h[i] - R);
        }

        ans = min(ans, cost);
    }

    cout << ans;
    return 0;
}
