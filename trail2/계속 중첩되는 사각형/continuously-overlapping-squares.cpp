#include <iostream>

using namespace std;

int n;
int x1[11], y1[11];
int x2[11], y2[11];
int blocks[200][200] = {0,};

int main() {
    cin >> n;
    int offset = 100;
    for (int i = 1; i <= n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    for (int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            for(int j = x1[i]+offset; j<x2[i]+offset; j++){
                for(int k = y1[i]+offset; k <y2[i]+offset; k++){
                    blocks[j][k] = 1;
                }
            }
        }
        else {
            for(int j = x1[i]+offset; j<x2[i]+offset; j++){
                for(int k = y1[i]+offset; k < y2[i]+offset; k++){
                    blocks[j][k] = 2;
                }
            }
        }
    }
    int ans = 0;
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(blocks[i][j] == 2 ) ans++;
        }
    }
    cout << ans;
    return 0;
}