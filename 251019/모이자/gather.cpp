#include <iostream>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int mi=10000;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=A[j]*abs(j-i);
        }
        mi=min(mi,sum);
    }
    cout << mi;

    return 0;
}