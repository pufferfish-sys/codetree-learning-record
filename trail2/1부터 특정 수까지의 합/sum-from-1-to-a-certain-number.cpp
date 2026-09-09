#include <iostream>

using namespace std;

int N;

int sum1(int a){
    int total = 0;
    for(int i = 1 ; i <= a; i++){
        total += i;
    }
    return total / 10;
}

int main() {
    cin >> N;
    cout << sum1(N);
    
    // Please write your code here.

    return 0;
}