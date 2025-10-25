#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int ans=101;
    for(int i=2;i<=100;i+=2){
        for(int j=2;j<=100;j+=2){
            int cnt1=0,cnt2=0,cnt3=0,cnt4=0,tempmax=0;
            for(int k=0;k<n;k++){
                if(x[k]<i&&y[k]<j) cnt1++;
                else if(x[k]>i&&y[k]<j) cnt2++;
                else if(x[k]<i&&y[k]>j) cnt3++;
                else if(x[k]>i&&y[k]>j) cnt4++;
            }
            tempmax=max({cnt1,cnt2,cnt3,cnt4});
            ans= min(tempmax,ans);
        }
    }
    cout << ans;
    // Please write your code here.

    return 0;
}