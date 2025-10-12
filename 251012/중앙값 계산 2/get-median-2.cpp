#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000]; // 최대 N 크기, 문제에서 N 범위 확인 필요

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if ((i + 1) % 2 == 1) { // 홀수 번째 입력
            // 현재까지 입력된 배열 정렬
            sort(arr, arr + i + 1);
            // 중앙값 출력
            cout << arr[i / 2] << " ";
        }
    }

    return 0;
}
