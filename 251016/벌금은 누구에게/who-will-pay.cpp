#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int main() {
    cin >> N >> M >> K;
    int arr[101]={0,};
    for (int i = 0; i < M; i++) {
        cin >> student[i];
        arr[student[i]]++;
    }
    int ans = -1;
    for(int i=1; i<=N;i++){
        if(arr[i]>=K) {ans=i;break;};
    }
    cout << ans;

    return 0;
}