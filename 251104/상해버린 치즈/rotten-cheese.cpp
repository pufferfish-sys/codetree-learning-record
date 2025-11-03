#include <iostream>

using namespace std;

int N, M, D, S;
int p[1001], m[1001], t[1001];
int sick_p[51], sick_t[51];
int potential[51]={0,};
int main() {
    cin >> N >> M >> D >> S;

    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    for (int i = 0; i < S; i++) {
        cin >> sick_p[i] >> sick_t[i];
    }

    for(int drink=1; drink<=M; drink++){
        for(int i=0;i<S;i++){
            if(potential[drink]==1) break;
            bool drank = false;
            for(int j=0;j<D;j++){
                if(p[j]==sick_p[i] && m[j]==drink && t[j]<sick_t[i]){
                    drank = true;
                    break;
                }
            }
            if(drank) potential[drink]=1;
        }
        
    }



    int ans =0;

    for(int i=1;i<=M;i++){
        if(potential[i]==0) continue;
        int person[51]={0,};
        for(int j=0;j<D;j++){
            if(m[j]==i) person[p[j]]=1;
        }
        int cnt =0;
        for(int j=1;j<=N;j++){
            if(person[j]==1) cnt++;
        }
        ans=max(cnt,ans);
    }
    cout << ans;

    return 0;
}
