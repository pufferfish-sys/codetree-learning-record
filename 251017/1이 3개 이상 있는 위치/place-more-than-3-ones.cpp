#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4] = {0,1,0,-1},dy[4] ={1,0,-1,0};

bool InRange(int x, int y){
        return (0<=x &&x<n && 0<=y && y <n);
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            int cnt=0;
            for(int dir_num=0;dir_num <4; dir_num++){
                int nx = i+dx[dir_num],ny = j+dy[dir_num];
                if(InRange(nx,ny)&&grid[nx][ny]==1) cnt++;
            }
            if(cnt>=3) cnt2++;
        }
    }

    cout<<cnt2;

    return 0;
}