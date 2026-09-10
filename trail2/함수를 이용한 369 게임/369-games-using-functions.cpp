#include <iostream>

using namespace std;

int a, b;

bool if369(int a){
    while(a>0){
        if(a % 10 == 3 || a % 10 == 6 || a % 10 == 9){
            return true;
        }
        a = a / 10;
    }
    return false;
}

bool IsMagicNumber(int a){
    return a % 3 == 0 || if369(a);
}


int main() {
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(IsMagicNumber(i)) cnt++;
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}