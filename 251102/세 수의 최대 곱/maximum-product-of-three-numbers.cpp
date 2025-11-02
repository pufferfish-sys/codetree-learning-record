#include <iostream>
#include <climits>
using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = INT_MIN; 
    for(int x=0; x<n;x++){
        for(int y=x+1; y<n;y++){
            if(x==y)continue;
        for(int z=y+1; z<n;z++){
            if( z==x||z==y) continue;
          mx=max(mx,arr[x]*arr[y]*arr[z]);          
   }
   }

   }
    cout << mx;
    return 0;
}
