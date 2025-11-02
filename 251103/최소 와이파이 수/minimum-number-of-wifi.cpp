#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    int sum=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
        
    }
    int cnt=0;

    for(int i=0;i<n-m;i++){
        if(arr[i]==1) {cnt++;i+=2*m;}
    }
    if(m>=n) if(sum>=1)cnt=1;
    else cnt =0;
    cout << cnt;

    return 0;
}