#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int blocks[201][201] = {0,};

int main() {
    cin >> N;
    int offset = 100;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    for(int i = 0 ; i < N; i++){
        for(int j = offset+x[i]; j<offset+x[i]+8; j++){
            for(int k = offset+y[i]; k<offset+y[i]+8; k++){
                blocks[j][k]=1;
            }
        }
    }
    int ans =0 ;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++) {
            if(blocks[i][j]==1) ans++;
        }
    }
    cout << ans;
    // Please write your code here.

    return 0;
}