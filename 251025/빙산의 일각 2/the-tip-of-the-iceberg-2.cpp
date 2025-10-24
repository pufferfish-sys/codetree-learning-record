#include <iostream>

using namespace std;

int n;
int h[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int max1=0;
   for(int i=1;i<=1000;i++){
    int cnt=0;
    for(int j =0;j<n;j++){
        if(h[j]>i){
            cnt++;
    for(int k=j+1;k<n;k++){
        if(h[k]<=i){
            j=k; break;}
        }
        }
     }
    max1=max(max1,cnt);
    }
    cout << max1;
    return 0;
}