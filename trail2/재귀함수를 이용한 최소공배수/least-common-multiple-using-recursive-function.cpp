#include <iostream>

using namespace std;

int n;
int arr[10];

int findAns(int a, int b){
    int gcd =1;
    for(int i = 1; i <= min(a,b); i++){
        if(b % i == 0 && a % i == 0) gcd = i;
    }
    return a*b / gcd;      
}

int calc(int N){
    if(N == 1) return arr[1];
    return findAns(calc(N-1), arr[N]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    cout << calc(n);

    return 0;
}