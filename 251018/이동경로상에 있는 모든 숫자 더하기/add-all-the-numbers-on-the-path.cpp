#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int num=0;

bool Range(int x,int y){
    return(0<=x && x<N && 0<=y && y<N);
}
int main() {
    cin >> N >> T;
    cin >> str;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
    int x=N/2,y=N/2;
    int cnt = board[x][y];
    for(int i=0; i<T;i++){
        if(str[i]=='R'){
            num = (num+1)%4;
        }
        else if(str[i]=='L'){
            num = (num-1+4)%4;
        }
        else{
            int nx = x+dx[num],ny=y+dy[num];
            if(Range(nx,ny)){
            x+=dx[num];
            y+=dy[num];
            cnt += board[x][y];
            }
        }
    }

    cout<< cnt;

    return 0;
}