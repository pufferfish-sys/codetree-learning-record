#include <iostream>

using namespace std;

int n;

bool ismagicnum(int a){
    return a%2==0 && (a/10 + a%10)%5==0;
}

int main() {
    cin >> n;
    if (ismagicnum(n)==1){cout << "Yes";}
    else {cout << "No";}
    // Please write your code here.

    return 0;
}