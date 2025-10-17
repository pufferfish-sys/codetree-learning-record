#include <iostream>
using namespace std;

int n, t;
int r, c;
char d;
int dir_num;

// 행이동이 y이므로 헷갈리지 말것! 줄어들수록 방향은 올라간다
int dx[4] = {0, -1, 0, 1}; // r 변화
int dy[4] = {1, 0, -1, 0}; // R,U,L,D

bool InRange(int x, int y){
    return (1 <= x && x <= n && 1 <= y && y <= n);
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    if(d=='U') dir_num = 1;
    else if(d=='D') dir_num = 3;
    else if(d=='R') dir_num = 0;
    else dir_num = 2;
    while(t--){
        int nx = r + dx[dir_num];
        int ny = c + dy[dir_num];

        if(!InRange(nx, ny)){
            dir_num = (dir_num + 2) % 4; // 반대 방향으로
        } else {
            r = nx;
            c = ny;
        }
    }

    cout << r << " " << c;
    return 0;
}
