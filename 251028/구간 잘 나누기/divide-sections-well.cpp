#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[1000];

bool possible(int limit) {
    int cnt = 1; // 구간 개수
    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > limit) return false; // limit보다 큰 단일 값은 불가능
        if (sum + arr[i] > limit) {
            cnt++;
            sum = arr[i];
        } else {
            sum += arr[i];
        }
    }
    return cnt <= M;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> arr[i];

    int left = max(arr[0], arr[N-1]); // 최소 가능값
    int right = 0;
    for (int i = 0; i < N; i++) right += arr[i]; // 최대 가능값
    int ans = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (possible(mid)) {
            ans = mid;
            right = mid - 1; // 더 작은 최대합이 가능한지 탐색
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
