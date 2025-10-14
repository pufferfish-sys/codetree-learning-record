#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int block[200]={0,};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    int spot =100;
    for(int i=0;i<n;i++){
        if(dir[i]=='R'){
        for(int j=spot;j<=spot+x[i];j++){
            block[j]++;
        }spot+=x[i];
        }
        if(dir[i]=='L'){
            for(int j=spot;j>=spot-x[i];j--){
                block[j]++;
            }
            spot-=x[i];
        }

    }
    int cnt =0;
    for(int i=0;i<200;i++){
        if(block[i]>=2) cnt++;
    }
    cout << cnt;

    return 0;
}