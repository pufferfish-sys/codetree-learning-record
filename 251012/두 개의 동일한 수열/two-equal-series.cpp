#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>

using namespace std;

int n,flag=1;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    sort(B,B+n);
    for (int i = 0; i < n; i++) {
        if(A[i]!=B[i]){
            flag =0;
            break;
        }}
    if(flag) cout << "Yes";
    else cout <<"No";

    return 0;
}