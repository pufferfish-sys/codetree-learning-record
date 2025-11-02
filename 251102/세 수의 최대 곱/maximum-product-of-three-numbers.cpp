#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];

    sort(arr, arr+n);
    
    int prod1 = arr[n-1] * arr[n-2] * arr[n-3];

    int prod2 = arr[0] * arr[1] * arr[n-1];

    int ans = max(prod1,prod2);

    cout << ans;
}
