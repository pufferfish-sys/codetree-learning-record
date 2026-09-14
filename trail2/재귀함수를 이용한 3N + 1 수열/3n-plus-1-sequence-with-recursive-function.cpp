#include <iostream>

using namespace std;

int n;

int calc(int n){
    if(n == 1) return 0;
    if(n%2==0) return calc(n/2) + 1;
    else return calc(n*3 + 1) + 1;

}

int main() {
    cin >> n;
    cout << calc(n);
    

    return 0;
}