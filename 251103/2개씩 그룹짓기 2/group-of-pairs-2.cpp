#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n;
int arr[200000];

//2 5 7 9 10 15
// 3 4 5 6 9 13

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+2*n);
    int ans =INT_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans,arr[n+i]-arr[i]);
    }
    cout << ans;


    return 0;
}