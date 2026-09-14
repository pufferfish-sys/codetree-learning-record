#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums,nums+2*N);

    int mx = 0;
    for (int i = 0; i < 2 * N; i++) {
        mx = max(mx,nums[i] + nums[2*N-i-1]);
    }
    cout << mx;
    return 0;
}
