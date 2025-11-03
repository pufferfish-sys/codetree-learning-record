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

for(int i=0; i<S;i++){
    for(int j=0;j<D;j++){
        if(p[j]==sick_p[i]&&t[j]<sick_t[i]) {
            potential[m[j]]=1;
            for(int x=0;x<S;x++){
                bool drank = false;
                for(int y=0;y<D;y++){
                    if(p[y]==sick_p[x] && m[y]==m[j] && t[y]<sick_t[x]) {
                        drank = true;
                        break;
                    }
                }
                if(!drank){ 
                    potential[m[j]] = 0;
                    break;
                }
            }
        }
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