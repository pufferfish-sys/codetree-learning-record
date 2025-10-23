#include <iostream>
#include <algorithm>
using namespace std;

int ability[6];

int main() {
    int total = 0;
    for (int i = 0; i < 6; i++){ 
        cin >> ability[i];
        total += ability[i];}

    int min_diff = 3000001;

    // 6개 중 3쌍 (i,j), (k,l), (a,b)
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                if (k == i || k == j) continue;
                for (int l = k + 1; l < 6; l++) {
                    if (l == i || l == j) continue;
                            int sum1 = ability[i] + ability[j];
                            int sum2 = ability[k] + ability[l];
                            int sum3 = total - sum1 - sum2;

                            int max_sum = max({sum1, sum2, sum3});
                            int min_sum = min({sum1, sum2, sum3});
                            min_diff = min(min_diff, max_sum - min_sum);
                }
            }
        }
    }

    cout << min_diff;
    return 0;
}
