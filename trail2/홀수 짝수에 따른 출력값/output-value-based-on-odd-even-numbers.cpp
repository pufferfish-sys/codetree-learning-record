#include <iostream>

using namespace std;

int N;

int magicFunc(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    if(n % 2 == 0) return magicFunc(n-2) + n;
    else return magicFunc(n-2) + n;
}

int main() {
    cin >> N;
    cout << magicFunc(N);
    

    return 0;
}