#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    int count = 0;
    while(true){
    if(a == c && b == d) break;
    
    count++; b++;
    if(b == 60) {b = 0; a++;}
    }
    
    cout << count;

    return 0;
}