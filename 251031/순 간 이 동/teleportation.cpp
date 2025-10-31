#include <iostream>
#include <algorithm>

using namespace std;

int a, b, x, y;

int main() {
    cin >> a >> b >> x >> y;
    int time1 = abs(b-a);
    int time2 = abs(a-x)+abs(b-y);
    int time3 = abs(a-y)+abs(b-x);
    int mint = min({time1,time2,time3});   
    cout << mint;
    

    return 0;
}