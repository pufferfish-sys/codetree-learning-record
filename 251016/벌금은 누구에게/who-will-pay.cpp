#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int arr[101]={0,};
int main() {
    cin >> N >> M >> K;
    int bul=-1;
    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }
    int ans=-1;
    for(int i=0;i<M;i++){
        arr[student[i]]++;
        if(arr[student[i]]>=K) {ans=student[i]; break;}
    }
    cout << ans;

    return 0;
}
