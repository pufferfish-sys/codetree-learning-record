#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for(int i=0;i<n;i++){
    int min2 = 101;
    int max1 = 0;
        for(int j=0;j<n;j++){
            
            if(j==i) continue;
            min2=min(min2,x2[j]);
            max1=max(max1,x1[j]);
        }
        if(min2>=max1) {cout << "Yes"; return 0;} 
    }
    cout << "No";

    return 0;
}