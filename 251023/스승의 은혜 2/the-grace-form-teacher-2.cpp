#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    sort(P,P+N);
    int cnt=0;
    for(int i=0;i<N;i++){
        B-=P[i];
        if(B<=0){
            B+=P[i];
            P[i]/=2;
            B-=P[i];
            if(B>=0) {cnt++;cout << cnt; return 0;}
            else {cout << cnt; return 0;}
        }
        cnt++;
    }
}