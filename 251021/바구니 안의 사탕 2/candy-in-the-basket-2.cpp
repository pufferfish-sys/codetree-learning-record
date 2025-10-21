#include <iostream>
#include <algorithm>

#define MAX_NUM 100

using namespace std;

int n, k;
int arr[101];

int main() {
    // 입력
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int x, a;
        cin >> a >> x;
        
        arr[x] += a;
    }
    
    // 모든 구간의 시작점을 잡아봅니다.
    int max_sum = 0;
    for(int i = 0; i <= 100; i++) {
        // 해당 구간 내 원소의 합을 구합니다.
        int sum = 0;
        for(int j = i - k; j <= i + k; j++)
            if(j >= 0 && j <= 100)
                sum += arr[j];
        max_sum = max(max_sum, sum);
    }
                        
    cout << max_sum;
    return 0;
}

