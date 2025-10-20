#include <iostream>

using namespace std;

int N, S;
int arr[100];

int main() {
    int mi=100000;
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

   int total = 0;
    for(int i=0;i<N;i++) total += arr[i];

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            int sum = total - arr[i] - arr[j];
            mi = min(mi, abs(S - sum));
        }
    }


        
    cout <<mi;
    return 0;
}