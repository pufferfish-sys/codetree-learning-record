#include <iostream>
using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;
    int ma = 0;
    for (int i = 0; i*A <= C; i++) {      // i의 최대값은 C/A
        for (int j = 0; j * B <= (C - A * i); j++) {  // A*i가 고정되면 j의 최대는 (C - A*i)/B
            int sum = A * i + B * j;
            ma = max(ma, sum);
        }
    }
    cout << ma;
    return 0;
}
