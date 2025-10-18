#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;
    int max_cnt =0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];
    for(int i=0; i<N;i++){
        int cnt=0;
        for(int j=0;j<N-2;j++){
            int cnt=0;
            cnt+=grid[i][j]+grid[i][j+1]+grid[i][j+2];
            max_cnt=max(max_cnt,cnt);
        }
    }
    cout << max_cnt;

    return 0;
}