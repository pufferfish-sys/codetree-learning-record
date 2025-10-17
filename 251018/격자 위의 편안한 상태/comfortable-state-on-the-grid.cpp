#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];
int grid[100][100]={0,};
int dx[4] = {0,1,0,-1},dy[4] ={1,0,-1,0};

bool InRange(int x, int y){
        return (1 <= x && x <= N && 1 <= y && y <= N);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }
    for(int j=0;j<M;j++){
    int cnt=0;
    grid[r[j]][c[j]]=1;
    for(int dir_num=0;dir_num <4; dir_num++){
                int nx = r[j]+dx[dir_num],ny = c[j]+dy[dir_num];
                if(InRange(nx,ny)&&grid[nx][ny]==1) cnt++;
            }
    if(cnt==3) cout<<1<<endl;
    else cout<<0<<endl;
    }
    return 0;
}





