#include <iostream>

using namespace std;

int a, b;

void modify(int &x, int &y){
    if(x > y) {x += 25; y *= 2;}
    else {y += 25; x *= 2; } 
}


int main() {
    cin >> a >> b;
    modify(a,b);
    cout << a << " " << b; 
    // Please write your code here.

    return 0;
}