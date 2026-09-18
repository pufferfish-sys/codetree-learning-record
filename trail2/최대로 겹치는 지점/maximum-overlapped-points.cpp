#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int arr[10001];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j <= x2[i]; j++){
            arr[j]++;
        }
    }
    int mx =0;
    for(int i = 0; i<=10000; i++){
        mx = max(mx,arr[i]);
    }
    cout << mx;

    return 0;
}