#include <iostream>

using namespace std;

int N;
int a[100], b[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    int ans =0;

    for(int x=1;x<=3;x++){
    int cnt =0;
    for(int y=1;y<=3;y++){
    if(x == y) continue;
    for(int i=0; i<N;i++){
    if(a[i]==x&&b[i]==y) cnt++;
    }
    ans = max(ans,cnt);
    }

    }
    cout << ans;

    return 0;
}