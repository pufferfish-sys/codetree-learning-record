#include <iostream>
using namespace std;

int a, b, c, d;
int arr[101] = {0,};  // 0~100까지 사용 가능하도록 변경

int main() {
    cin >> a >> b;
    cin >> c >> d;

    for (int i = a; i < b; i++) arr[i] = 1; 
    for (int i = c; i < d; i++) arr[i] = 1;

    int cnt = 0;
    for (int i = 0; i <= 100; i++) {
        if (arr[i] == 1) cnt++;
    }
    cout << cnt;
    return 0;
}
