#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int square[2000][2000]={0,};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    for(int i=x1[0]+1000;i<x2[0]+1000;i++){
            for(int j=y1[0]+1000;j<y2[0]+1000;j++){
                square[i][j]=1;
            }
    }
    for(int i=x1[1]+1000;i<x2[1]+1000;i++){
            for(int j=y1[1]+1000;j<y2[1]+1000;j++){
                square[i][j]=0;
            }
    }
    int ylast,ystart,xlast,xstart;
    for(int i=x1[0]+1000;i<x2[0]+1000;i++){
        for(int j=y1[0]+1000;j<y2[0]+1000;j++){
             if(square[i][j]==1) {ylast=j;}
        }
    }
    for(int i=y1[0]+1000;i<y2[0]+1000;i++){
        for(int j=x1[0]+1000;j<x2[0]+1000;j++){
             if(square[j][i]==1) {xlast=j;}
        }
    }
    for(int i=x2[0]+999;i>=x1[0]+1000;i--){
        for(int j=y2[0]+999;j>=y1[0]+1000;j--){
             if(square[i][j]==1) {ystart=j;}
        }
    }
    for(int i=y2[0]+999;i>=y1[0]+1000;i--){
        for(int j=x2[0]+999;j>=x1[0]+1000;j--){
             if(square[j][i]==1) {xstart=j;}
        }
    }
    int area = (ylast-ystart+1)*(xlast-xstart+1);
    cout<< area;


    return 0;
}