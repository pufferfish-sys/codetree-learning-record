#include <iostream>
#include <climits>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i=0;i<=10000-k;i++){
        int cost =0;
        int j = i+k;
        for(int x=0;x<n;x++){
            if(arr[x]>j) cost+= abs(arr[x]-j);
            else if(arr[x]<i) cost+= abs(arr[x]-i);
        }
        ans = min(cost,ans);
        
    }
    cout << ans;

    return 0;
}