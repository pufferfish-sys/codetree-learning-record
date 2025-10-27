#include <iostream>
#include <climits>
using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int ans;
    for(int i=1;i<=10000;i++){
        int start=i*2; bool flag = true;
    for(int j=0;j<n;j++){    
        if(start>=a[j]&&start<=b[j]) {start*=2; continue;}
        else{flag = false; break;} 
    }
    if(flag) {ans=i;break;}
    }
    cout << ans;
    return 0;
}