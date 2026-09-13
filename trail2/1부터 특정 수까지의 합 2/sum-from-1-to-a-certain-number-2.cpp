#include <iostream>

using namespace std;

int N;

int Sum(int a){
    if(a == 0) return 0;
    return a + Sum(a-1);  
}


int main() {
    cin >> N;
    cout << Sum(N);
    // Please write your code here.

    return 0;
}