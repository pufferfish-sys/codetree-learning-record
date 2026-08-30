#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    
    int sum = 0;
    sum = (c-a)*60 + d - b;
    
    cout << sum ;

    // Please write your code here.

    return 0;
}