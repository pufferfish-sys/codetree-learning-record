#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    bool same = true;
    sort(A,A+n);
    sort(B,B+n);
    for(int i=0; i< n ; i++){
        if(A[i]!=B[i]) {same = false; break;}
    }

    if(same) cout << "Yes";
    else cout << "No";   

    return 0;
}