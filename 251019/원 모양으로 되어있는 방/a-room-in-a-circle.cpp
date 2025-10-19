#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mi = INT_MAX;
    for(int i =0;i<n;i++){
        int num=0;
        for(int j=0;j<n;j++){
            int start=i;
            num += a[(i+j)%n]*j;
        }
        mi = min(mi,num);

    }
    cout << mi;


    return 0;
}