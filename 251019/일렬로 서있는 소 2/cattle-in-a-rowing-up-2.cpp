#include <iostream>

using namespace std;

int N;
int A[100];
int cnt=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if(A[j]>=A[i]&&A[j]<=A[k]) cnt++;
            }
        }

    }
    cout << cnt;

    return 0;
}