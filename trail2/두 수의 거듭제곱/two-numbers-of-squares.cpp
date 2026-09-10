#include <iostream>

using namespace std;

int a, b;

int func1(int x, int y){
    int ans = x;
    for(int i = 1 ; i < y ; i++){
        ans *= x;
    }
    return ans;

}


int main() {
    cin >> a >> b;
    cout << func1(a,b);
    // Please write your code here.

    return 0;
}