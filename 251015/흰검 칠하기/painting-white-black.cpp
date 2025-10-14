#include <iostream>
using namespace std;

int n;
int x[1000];
char dir[1000];

struct Tile {
    int w_count = 0;
    int b_count = 0;
    char color = ' '; // ' '=빈, 'W'=흰색, 'B'=검은색, 'G'=회색
};

Tile block[10000]; // 충분히 큰 배열
int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> x[i] >> dir[i];

    int spot = 5000; // 중앙 시작

    for(int i=0;i<n;i++){
        if(dir[i]=='R'){ // 오른쪽
            for(int j=spot; j<spot + x[i]; j++){
                if(block[j].color=='G') continue; // 회색은 변경 불가

                block[j].b_count++;
                if(block[j].b_count>=2 && block[j].w_count>=2){
                    block[j].color='G';
                } else {
                    block[j].color='B'; // 마지막 칠한 색
                }
            }
            spot += x[i]-1; // 마지막 칠한 위치에 서있음
        } else if(dir[i]=='L'){ // 왼쪽
            for(int j=spot; j>spot - x[i]; j--){
                if(block[j].color=='G') continue;

                block[j].w_count++;
                if(block[j].b_count>=2 && block[j].w_count>=2){
                    block[j].color='G';
                } else {
                    block[j].color='W';
                }
            }
            spot -= x[i]-1; // 마지막 칠한 위치에 서있음
        }
    }

    int cntW=0, cntB=0, cntG=0;
    for(int i=0;i<10000;i++){
        if(block[i].color=='W') cntW++;
        else if(block[i].color=='B') cntB++;
        else if(block[i].color=='G') cntG++;
    }

    cout << cntW << " " << cntB << " " << cntG;

    return 0;
}
