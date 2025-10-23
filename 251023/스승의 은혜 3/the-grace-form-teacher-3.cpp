#include <iostream>
#include <algorithm>
using namespace std;

int N, B;
int P[1000], S[1000];

int main() {
    cin >> N >> B;
    for(int i=0;i<N;i++)
        cin >> P[i] >> S[i];

    int ans = 0;
    for(int coupon=0; coupon<N; coupon++){ // 쿠폰 적용 학생 선택
        int budget = B;
        int cost[1000];
        for(int i=0;i<N;i++){
            if(i==coupon) cost[i] = P[i]/2 + S[i]; // 쿠폰 적용
            else cost[i] = P[i] + S[i];
        }

        sort(cost, cost+N); // 최소 비용 순으로 처리
        int cnt=0;
        for(int i=0;i<N;i++){
            if(budget >= cost[i]){
                budget -= cost[i];
                cnt++;
            } else break;
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}
