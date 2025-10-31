#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string s;

int main() {
    cin >> n >> s;

    int maxNew = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') continue;

        int l = i - 1;
        while (l >= 0 && s[l] == '0') l--;
        int r = i + 1;
        while (r < n && s[r] == '0') r++;

        int dist = min(i - l, r - i);
        maxNew = max(maxNew, dist);
    }

    cout << maxNew;
    return 0;
}
