#include <iostream>

using namespace std;

int a, b;

void changer(int &x, int &y){
    if(x > y) { x *=2 ; y += 10; }
    else { y *= 2; x += 10;}
}

int main() {
    cin >> a >> b;
    changer(a,b);
    cout << a << " " << b ; 
    // Please write your code here.

    return 0;
}