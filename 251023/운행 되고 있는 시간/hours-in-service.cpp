#include <iostream>

using namespace std;

int N;
int A[100], B[100];
int service[1000] ={0,};
int main() {
    cin >> N;
    int maxt =0;
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    for(int i=0; i<N ;i++){
        fill(service, service + 1000, 0);
        int timecnt=0;
        for(int j=0;j<N;j++){
        if(j==i) continue;
        for(int k=A[j];k<B[j];k++){
            service[k]=1;}
        }
        for(int l=0;l<1000;l++){
            if(service[l]==1) timecnt++;
        }
        maxt = max(maxt,timecnt);
    }
    cout << maxt;

    return 0;
}