#include <iostream>

using namespace std;

int n;
char grid[1001][1001];
int k;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
// 0: 북, 1: 동, 2: 남, 3: 서
int num;
int cnt=0;
bool InRange(int x, int y){
        return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    cin >> k;
    int s1,s2;
    if(k<=n) {num=2;s1=0;s2=k-1;}
    else if(k<=2*n) {num=3;s1=k-n-1;s2=n-1;}
    else if(k<=3*n) {num=0;s1=n-1;s2=3*n-k;}
    else {num=1;s1=4*n-k;s2=0;}
    int nx=s1,ny=s2;
    while (true) {
    if(!InRange(nx,ny)) break; // 먼저 범위 체크
    if(grid[nx][ny]=='/'){
        if(num==0) num=1;
        else if(num==1) num=0;
        else if(num==2) num=3;
        else num=2;
    }
    else { // '\'
        if(num==0) num=3;
        else if(num==1) num=2;
        else if(num==2) num=1;
        else num=0; 
    }
    nx += dx[num];
    ny += dy[num];
    cnt++;
}


    
    cout <<cnt;


    return 0;
}
