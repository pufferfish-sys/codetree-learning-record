#include <iostream>

using namespace std;

int N;
int calcSum(int n){
    if(n < 10) return n * n;
    return calcSum(n / 10) + (n % 10) * (n % 10);

}

int main() {
    cin >> N;

    cout << calcSum(N);

    return 0;
}