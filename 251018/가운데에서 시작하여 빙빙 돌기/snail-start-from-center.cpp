#include <iostream>

using namespace std;

int n;
int arr[100][100]={};
int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
int dir_num;

bool InRange(int x,int y){
    return(0<=x&&x<n&&0<=y&&y<n);
}
int main() {
    cin >> n;
    int x=n-1,y=n-1;
    arr[x][y]=n*n;
    for(int i=n*n-1;i>0;i--){
        int nx = x+dx[dir_num],ny= y+dy[dir_num];
        if(!InRange(nx,ny)||arr[nx][ny]!=0){dir_num =(dir_num+1)%4;}
            x=x+dx[dir_num];y=y+dy[dir_num];
            arr[x][y] =i;
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++)
            cout <<arr[i][j]<<" ";
        cout <<endl;            
    }
    return 0;
}