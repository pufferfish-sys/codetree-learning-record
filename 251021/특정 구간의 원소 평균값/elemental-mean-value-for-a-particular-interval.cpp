#include <iostream>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            int cnt = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
                cnt++;
            }
            if (sum % cnt != 0) continue; // 평균이 정수가 아니면 패스
            int avg = sum / cnt;
            for (int k = i; k <= j; k++) {
                if (arr[k] == avg) {
                    cnt2++;
                    break;
                }
            }
        }
    }

    cout << cnt2;
    return 0;
}
