#include <iostream>
#include <algorithm>
using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int min1=1000000;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        int distance = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
        min1 = min(min1,distance);
        }
    }
    cout << min1;

    return 0;
}