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
    int cnt=0,flag=1;

    for(int i=0;i<N;i++){
        if(!flag) break; 
        B-=P[i];
        if(B<=0){
            B+=P[i];
            P[i]/=2;
            B-=P[i];
            if(B>=0) {cnt++;flag=0;}
            else {flag=0;}
        }
        if(flag) cnt++;
    }
    
    cout << cnt;
}