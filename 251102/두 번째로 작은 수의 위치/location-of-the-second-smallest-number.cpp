#include <iostream>

using namespace std;

int n;
int a[101];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int min1 = 101, index;
    for(int i = 1; i<=n;i++){
        if(a[i]<min1){
            min1=a[i];
        }
    }
    int min2 =101, ans=-1,cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==min1) continue;
        if(a[i]<min2){
            min2 = a[i];
            ans = i;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==min2) cnt++;
        if(cnt>1) {cout << -1; return 0;}
    }

    cout << ans;

    return 0;
}