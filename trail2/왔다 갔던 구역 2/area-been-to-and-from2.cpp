#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int blocks[2001] = {0,};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    int offset = 1000;
    for(int i=0; i < n; i++){
        if(dir[i]=='L'){
        for(int j = x[i]; j > 0; j--){
                blocks[--offset]++;
        }
        }
        else {
            for(int j = 0; j < x[i]; j++){
                blocks[offset++]++;
        }
        }
    }
    int ans =0;
    for(int i = 0; i <= 2000; i++){
        if(blocks[i] >=2) ans++;
    }
    cout << ans;

    return 0;
}