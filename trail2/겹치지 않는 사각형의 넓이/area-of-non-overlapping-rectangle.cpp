#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int blocks[2001][2001] = {0,};

int main() {
    int offset = 1000;
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];
    for(int i = 0 ; i <= 2 ;i++){
        for(int j = offset+x1[i]; j < offset+x2[i]; j++){
            for(int k = offset+y1[i]; k < offset+y2[i]; k++){
                blocks[j][k] = i + 1;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i<=2000;i++){
        for(int j = 0; j <= 2000; j++){
            if(blocks[i][j] == 1 || blocks[i][j]==2) ans++;
        }
    }
    cout << ans;

    return 0;
}