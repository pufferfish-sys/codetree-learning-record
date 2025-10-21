#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

int N, H, T;
int arr[MAX_N];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int min_cost = INT_MAX;
    for (int i = 0; i <= N - T; i++) {
        int cost = 0;
        for (int k = i; k < i + T; k++) {
            cost += abs(arr[k] - H);
        }
        min_cost = min(min_cost, cost);
    }

    cout << min_cost;
    return 0;
}
