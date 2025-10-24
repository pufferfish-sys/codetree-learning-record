#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y; 
    int max1 =0;
    for(int i=X;i<=Y;i++){
        int d = i;
        int d1 = d % 10;
        int d2 = (d / 10)%10;
        int d3 = (d / 100)%10;
        int d4 = (d/1000)%10;
        max1 = max(max1,d1+d2+d3+d4);
    }
    cout << max1;
    // Please write your code here.

    return 0;
}