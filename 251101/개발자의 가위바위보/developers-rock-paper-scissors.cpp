#include <iostream>
using namespace std;

int N;
int a[100], b[100];

int main() {
    cin >> N;
    for(int i=0;i<N;i++) cin >> a[i] >> b[i];

    int ans = 0;

    // 1,2,3을 가위,바위,보로 매핑하는 모든 순열
    int perm[6][3] = {
        {1,2,3}, {1,3,2}, {2,1,3}, 
        {2,3,1}, {3,1,2}, {3,2,1}
    };

    for(int p=0;p<6;p++){ // 6가지 매핑
        int win[4][4] = {0};

        int g = perm[p][0]; // 가위
        int r = perm[p][1]; // 바위
        int s = perm[p][2]; // 보

        win[g][s] = 1; // 가위>보
        win[r][g] = 1; // 바위>가위
        win[s][r] = 1; // 보>바위

        int cnt = 0;

        for(int x=1;x<=3;x++){ // 내 후보
            for(int y=1;y<=3;y++){ // 상대 후보
                if(x == y) continue; // 같은 숫자면 승리 아님
                for(int i=0;i<N;i++){
                    if(a[i]==x && b[i]==y && win[x][y]) cnt++;
                }
            }
        }

        if(cnt > ans) ans = cnt;
    }

    cout << ans;
    return 0;
}
