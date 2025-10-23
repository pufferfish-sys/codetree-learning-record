#include <iostream>

using namespace std;

#define OFFSET 1000000;
int N;
int x1[100], x2[100];

int main() {
    cin >> N;
    int max_x=0;
    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
        x1[i]+=OFFSET;
        x2[i]+=OFFSET;
    }
    int cnt =0; 
    for(int i=1; i<=N;i++){
        if(x2[i-1]>=x2[i]) cnt++;
    }
    cout << N-cnt;

    

    return 0;
}