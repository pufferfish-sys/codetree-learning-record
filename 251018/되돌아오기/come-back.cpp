#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int x=0,y=0;
int dir_num;
int cnt=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }
    for(int i=0;i<N;i++){
        if(dir[i]=='W') dir_num=2;
        else if(dir[i]=='S') dir_num=3;
        else if(dir[i]=='N') dir_num=1;
        else if(dir[i]=='E') dir_num=0;
        for(int j=0;j<dist[i];j++){
            x+=dx[dir_num]; y+=dy[dir_num];
            cnt++;
            if(x==0&&y==0) {cout << cnt; return 0;}
        }

    }


    return 0;
}