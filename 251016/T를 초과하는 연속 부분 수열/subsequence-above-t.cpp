#include <iostream>

using namespace std;

int n, t;
int arr[1000];
int cnt=0,ans=0;
int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]>t) cnt++;
        else cnt=0;
        ans=max(ans,cnt);
    }
    cout << ans;

    return 0;
}