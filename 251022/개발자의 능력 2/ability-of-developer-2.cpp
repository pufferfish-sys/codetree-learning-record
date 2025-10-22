#include <iostream>
#include <algorithm>
using namespace std;

int ability[6];

int main() {
    for (int i = 0; i < 6; i++) cin >> ability[i];

    int min_diff = 3000001;

    // 6개 중 3쌍 (i,j), (k,l), (a,b)
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                if (k == i || k == j) continue;
                for (int l = k + 1; l < 6; l++) {
                    if (l == i || l == j) continue;
                    for (int a = 0; a < 6; a++) {
                        if (a == i || a == j || a == k || a == l) continue;
                        for (int b = a + 1; b < 6; b++) {
                            if (b == i || b == j || b == k || b == l) continue;

                            int sum1 = ability[i] + ability[j];
                            int sum2 = ability[k] + ability[l];
                            int sum3 = ability[a] + ability[b];

                            int max_sum = max({sum1, sum2, sum3});
                            int min_sum = min({sum1, sum2, sum3});
                            min_diff = min(min_diff, max_sum - min_sum);
                        }
                    }
                }
            }
        }
    }

    cout << min_diff;
    return 0;
}
