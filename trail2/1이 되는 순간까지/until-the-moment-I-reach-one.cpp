#include <iostream>

using namespace std;

int N;

int repeat(int a){

    if(a == 1) return 0;
    if(a % 2==0) return repeat(a/2) + 1;
    else return repeat(a/3) + 1;  

}

int main() {
    cin >> N;
    cout << repeat(N);

    return 0;
}