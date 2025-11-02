#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt=0;

    for(int i=0;i<n-m;i++){
        if(arr[i]==1) cnt++;
        i+=m;
    }
    if(m>=n) cnt=1;
    cout << cnt;

    return 0;
}