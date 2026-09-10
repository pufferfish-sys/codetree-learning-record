#include <iostream>

using namespace std;

int a, b;

bool isNumber(int a)
{
    for(int i = 2; i < a ; i++){
        if(a % i ==0) return false;
    }
    int sum = 0; 
    while(a > 0) {sum += a % 10; a = a / 10;}
    if (sum % 2 == 0 ) return true;
    else return false;
}

int main() {
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(isNumber(i)) cnt++;
    }
    cout << cnt;
    // Please write your code here.

    return 0;
}