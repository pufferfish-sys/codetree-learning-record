#include <iostream>

using namespace std;

int a, b;

bool IsMagicNumber(int a){
    for(int i = 2; i < a; i++){
        if(a % i == 0) return false; 
    }
    return true; 
}

int main() {
    cin >> a >> b;
    int cnt = 0;
    for(int i = a ; i <=b; i++){
        if(IsMagicNumber(i)) cnt+= i;
    }
    cout << cnt;

    return 0;
}