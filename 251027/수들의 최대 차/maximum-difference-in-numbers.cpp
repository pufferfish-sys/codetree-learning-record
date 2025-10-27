#include <iostream>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int a=1; a<=10000;a++){
        int cnt =0;
        for(int i=0; i<N;i++){
            if(arr[i]>=a&&arr[i]<=a+K){
                cnt++;
            }
        }
        ans=max(cnt,ans);
        }
    cout << ans;

    return 0;
}