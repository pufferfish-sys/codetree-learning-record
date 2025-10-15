#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int square[200][200]={0,};
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<N;i++){
        for(int j=x[i]+100;j<x[i]+108;j++){
            for(int k=y[i]+100;k<y[i]+108;k++){
                square[j][k]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(square[i][j]==1){
                cnt++;
            }
        }
    }
    cout <<cnt;
    return 0;
}