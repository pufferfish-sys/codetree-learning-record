#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int A[100], B[100];
int C[100] ={0,};
int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }
    for(int i=0; i<K;i++){
        for(int j=A[i];j<=B[i];j++){
            C[j]++;
        }        
    }
    int result = *max_element(C, C + N + 1);
    cout << result;

    return 0;
}