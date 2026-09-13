#include <iostream>

using namespace std;

int N;

void repeatFunc(int n){

    if(n == 0 ) return;
    cout << n << " ";
    repeatFunc(n - 1);
    cout << n << " ";
}


int main() {
    cin >> N;
    repeatFunc(N);
    // Please write your code here.

    return 0;
}