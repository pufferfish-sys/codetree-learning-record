#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    int min1 = 101;
    int max1 = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i) continue;
            min1=min(min1,x2[j]);
            max1=max(max1,x1[j]);
        }
        if(min1<max1) {cout << "Yes"; return 0;} 
    }
    cout << "No";

    return 0;
}