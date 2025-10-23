#include <iostream>
#include <algorithm>
using namespace std;

int N, B;
int P[1000];
int S[1000];
int sum[1000];
int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
        sum[i] = P[i] + S[i];
    }
    sort(sum,sum+N);
    int cnt=0,flag=1;

    for(int i=0;i<N;i++){
        if(!flag) break; 
        B-=sum[i];
        if(B<=0){
            int maxp=0;
            for(int j=0;j<=i;j++){
                maxp=max(maxp,P[i]);
            }
            B+=maxp/2;
            if(B>=0) {cnt++;flag=0;}
            else {flag=0;}
        }
        if(flag) cnt++;
    }
    
    cout << cnt;
}