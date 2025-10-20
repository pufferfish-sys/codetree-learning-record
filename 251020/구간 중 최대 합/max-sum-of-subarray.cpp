#include <iostream>
#include <climits>
using namespace std;

int n, k;
int arr[100];

int main() {
    int ma=INT_MIN;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-k+1; i++){
        int sum = arr[i]+arr[i+1]+arr[i+2];
        ma=max(ma,sum);
    }
    cout << ma;

    return 0;
}