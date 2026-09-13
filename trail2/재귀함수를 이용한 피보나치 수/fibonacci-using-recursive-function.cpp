#include <iostream>

using namespace std;

int N;

int findFunc(int n){
    if( n <= 2 ) return 1;
    return findFunc(n -1) + findFunc(n - 2);

}


int main() {
    cin >> N;
    cout << findFunc(N);

    return 0;
}