#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int square[2000][2000]={0,};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];
    for(int i=0;i<2;i++){
        for(int j=y1[i]+1000;j<y2[i]+1000;j++){
            for(int k=x1[i]+1000;k<x2[i]+1000;k++){
                square[j][k]=1;
            }
        }
    }
    for(int j=y1[2]+1000;j<y2[2]+1000;j++){
            for(int k=x1[2]+1000;k<x2[2]+1000;k++){
                square[j][k]=0;
            }
        }
        int cnt =0;
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++)
        if(square[i][j]==1) cnt++;
    }
    cout << cnt;


    return 0;
}