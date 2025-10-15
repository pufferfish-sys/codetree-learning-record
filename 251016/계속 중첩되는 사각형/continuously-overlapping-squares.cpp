#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
int block[200][200]={0,};
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=x1[i]+100;j<x2[i]+100;j++){
            for(int k=y1[i]+100;k<y2[i]+100;k++){
                if(i%2==0) block[j][k]=1;
                else block[j][k]=2;
            }
        }
    }
    int cnt=0;
   for(int i=0;i<200;i++){
    for(int j=0;j<200;j++){
        if(block[i][j]==2) cnt++;
    }
   }
    cout<<cnt;
    return 0;
}