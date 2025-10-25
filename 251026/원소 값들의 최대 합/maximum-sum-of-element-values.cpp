#include <iostream>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int max1=0;
    for(int j=1;j<=100;j++){
        int start=j,sum=0;
    for(int i=0;i<m;i++){
        sum+=arr[start];
        start=arr[start];
        }
        max1=max(max1,sum);
    }
    cout <<max1;

    return 0;
}