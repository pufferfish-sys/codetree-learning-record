#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int blocks[101] = {0,};

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < K; i++){
        for(int j = A[i]; j<= B[i]; j++)
        blocks[j]++;
    }
    int mx = 0;
    for(int i = 0 ; i<=100; i++){
        mx = max(mx,blocks[i]);
    }
    cout << mx;
    // Please write your code here.

    return 0;
}