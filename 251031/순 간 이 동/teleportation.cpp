#include <iostream>
#include <algorithm>

using namespace std;

int a, b, x, y;

int main() {
    cin >> a >> b >> x >> y;
    int time1 = b-a;
    int time2 = abs(a-x)+b-y;
    int time3 = abs(a-y)+b-x;
    int mint = min({time1,time2,time3});   
    cout << mint;
    

    return 0;
}