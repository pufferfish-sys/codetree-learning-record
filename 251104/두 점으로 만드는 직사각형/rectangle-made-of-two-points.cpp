#include <iostream>

using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    int minx = min(x1,a1);
    int maxx = max(x2,a2);
    int miny = min(y1,b1);
    int maxy = max(y2,b2);
    int ans = (maxx-minx)*(maxy-miny);
    cout<< ans;

    

    return 0;
}