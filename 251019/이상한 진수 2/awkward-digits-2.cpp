#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;

    int max1 = 0, flag = 0;

    // 1. 첫 번째 0을 찾아서 1로 바꾸기
    for (int j = 1; j < a.size() - 1; j++) {
        if (a[j] == '0') {
            flag = 1;
            a[j] = '1'; // 수정된 부분
            break;
        }
    }

    // 2. 만약 0이 없었다면 -> 마지막 비트를 0으로 변경
    if (flag == 0) a[a.size() - 1] = '0';

    // 3. 2진수를 10진수로 변환
    int sum = 0;
    for (int k = 0; k < a.size(); k++) {
        sum = sum * 2 + (a[k] - '0');
    }
    max1 = sum;

    cout << max1;
    return 0;
}
