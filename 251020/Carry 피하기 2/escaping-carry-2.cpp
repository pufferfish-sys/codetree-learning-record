#include <iostream>
using namespace std;

int n;
int arr[20];

bool valid(int a, int b, int c) {
    for (int i = 0; i < 5; i++) { // 각 자리 비교 (최대 5자리라 가정)
        int sum = (a % 10) + (b % 10) + (c % 10);
        if (sum >= 10) return false; // 한 자리라도 합이 10 이상이면 실패
        a /= 10; b /= 10; c /= 10;
    }
    return true; // 모든 자리 합이 10 미만
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ma = -1;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (valid(arr[i], arr[j], arr[k])) {
                    int sum = arr[i] + arr[j] + arr[k];
                    ma = max(ma, sum);
                }
            }
        }
    }

    cout << ma;
    return 0;
}
