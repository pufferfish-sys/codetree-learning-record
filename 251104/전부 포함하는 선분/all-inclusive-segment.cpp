#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    int ans = 101;
    for(int i=0;i<n;i++){
    int minx=101;
    int maxx=0; 
        for(int j=0;j<n;j++){
            if(i==j) continue;
            minx=min(x1[j],minx);
            maxx=max(x2[j],maxx);
        }
    int length = maxx-minx;
    ans=min(ans,length);
    }
    cout << ans;

    return 0;
}