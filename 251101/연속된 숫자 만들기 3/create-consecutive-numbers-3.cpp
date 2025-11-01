#include <iostream>

using namespace std;

int a[3];

int main() {
    int cnt=0;
    for (int i = 0; i < 3; i++) cin >> a[i];
    if(a[1]-a[0]>a[2]-a[1]){
        while(a[0] + 1 <a[1]){
            cnt++;
            a[1]--;
            };
    }
    else{
        while(a[2]>a[1]+1) {
            cnt++;
            a[1]++;
            };
    }
    cout << cnt;

    return 0;
}