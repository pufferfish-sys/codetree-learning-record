#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
        for(int i = 0; i < n; i++) {
            bool flag = false;
            for(int j = i; j < n - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    flag = true;
                }
            }
            if(flag) cnt++;
        }
    cout << cnt;

    return 0;
}