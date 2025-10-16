#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int arr[10000]={0,};
int main() {
    cin >> N >> M >> K;
    for (int i = 0; i < M; i++) {
        cin >> student[i];
        arr[student[i]]++;
    }
    for(int i=1;i<=N;i++){
        if(arr[i]>=K) {cout<<i; return 0;}
    }
    cout << -1;

    return 0;
}