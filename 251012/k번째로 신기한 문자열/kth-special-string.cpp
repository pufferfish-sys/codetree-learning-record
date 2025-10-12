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
    int cnt = -1;
    for (int i = 0; i < n; i++) {
        if (str[i].find(T) != string::npos) {
            cnt = i;
            break;
        }
    }
    cout << str[cnt + k - 1];
    return 0;
}
