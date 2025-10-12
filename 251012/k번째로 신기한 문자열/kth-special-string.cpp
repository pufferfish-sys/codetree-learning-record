#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define Max_N 100

int n, k;
string T;
string str[Max_N];

int main() {
    cin >> n >> k >> T;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // 전체 배열 정렬
    sort(str, str + n);

    // T 포함 문자열만 배열의 앞쪽으로 이동시키고 개수 셈
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (str[i].find(T) != string::npos) {
            swap(str[i], str[m]);
            m++;
        }
    }

    // T 포함 문자열만 정렬
    sort(str, str + m);
    cout << str[k - 1];

    return 0;
}

