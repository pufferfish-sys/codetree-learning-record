#include <iostream>

using namespace std;

int a;
int c;
char o;

int plus1(int a, int b){
    return a + b;
}
int minus1(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}

int div1(int a, int b){                          
    
    return a / b;
 }

int main() {
    cin >> a >> o >> c;
    int ans;
    if( o == '+'){ans = plus1(a,c);}
    else if( o == '-') {ans =minus1(a,c);}
    else if( o == '/') {ans = div1(a,c);}
    else if( o == '*') {ans =mul(a,c);}
    else {cout << "False"; return 0; }
    cout << a << " " << o << " " << c << " = " << ans;
    return 0;
}