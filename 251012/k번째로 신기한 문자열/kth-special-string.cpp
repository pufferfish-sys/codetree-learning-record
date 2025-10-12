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

    // 전체 배열 사전순 정렬
    sort(str, str + n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i].find(T) != string::npos) {
            cnt++;
            if (cnt == k) {
                cout << str[i];
                return 0;
            }
        }
    }

    cout << "NO"; // k번째 T 포함 문자열이 없으면
    return 0;
}
