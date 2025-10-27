#include <iostream>
using namespace std;

int n, m;
int a, b;
int cnt[10000]; // n 최대 100이면 100*100 = 10000 가능

int main() {
    cin >> n >> m;
    int max_cnt = 0;
    
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        if (a > b) swap(a, b); // (a,b)와 (b,a)는 같음
        
        int idx = (a - 1) * n + (b - 1);
        cnt[idx]++;
        max_cnt = max(max_cnt, cnt[idx]);
    }
    
    cout << max_cnt;
    return 0;
}
