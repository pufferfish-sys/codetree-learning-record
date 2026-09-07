#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

void func(int a, int b){
    int max1 = 0;
    for(int i = 1; i <= min(a,b); i++){
        if(a % i == 0 && b % i == 0){
            max1 = i;
        }
    }
    cout << max1 << endl;
}

int main() {
    cin >> n >> m;
    func(n,m);
    // Please write your code here.
    return 0;
}