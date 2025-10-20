#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int A[100], B[100];

int main() {
    cin >> N >> M;
    int temp[100]; // 임시 배열
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(B, B + M); 
    int cnt2 = 0;

    for (int i = 0; i <= N - M; i++) { 
        for (int j = 0; j < M; j++) temp[j] = A[i + j];
        sort(temp, temp + M);

        bool same = true;
        for (int j = 0; j < M; j++) {
            if (temp[j] != B[j]) {
                same = false;
                break;
            }
        }
        if (same) cnt2++;
    }

    cout << cnt2 << endl;
    return 0;
}
