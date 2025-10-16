#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];
int a[1000000]={0,},b[1000000]={0,};
int main() {
    cin >> N >> M;
    int time=0,time2=0,spota=0,spotb=0;
    for (int i = 0; i < N; i++) cin >> v[i] >> t[i];
    for (int i = 0; i < M; i++) cin >> v2[i] >> t2[i];
    for(int i=0;i<N;i++){
        for(int j=0;j<t[i];j++){
            a[time++]=spota;
            spota+=v[i];
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<t2[i];j++){
            b[time2++]=spotb;
            spotb+=v2[i];
        }
    }
    int cnt=0,flag=0;
    int time3 = min(time,time2);
    for(int i=0;i<time3;i++){
        if(a[i]>=b[i]&&flag!=1){
            flag=1;
            cnt++;
        }
        else if(b[i]>=a[i]&&flag!=2){
            cnt++;
            flag=2;
        }
    }
    cout << cnt-1;
    return 0;
}