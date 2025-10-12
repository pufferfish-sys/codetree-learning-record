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
    sort(str, str + n);
    int cnt = 0; // T를 포함하는 문자열을 몇 개 만났는지 카운트
    for (int i = 0; i < n; i++) {
        if (str[i].find(T) != string::npos) {
            cnt++;
            if (cnt == k) {       // k번째 발견 시 출력
                cout << str[i];
                return 0;
            }
        }
    }
    return 0;
}
