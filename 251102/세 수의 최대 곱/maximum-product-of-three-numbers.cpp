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
    // 양음음, 양양양 //전부다 음수일땐 가장 작은거 3개
    int mx = INT_MIN; 
    for(int x=0; x<n;x++){
        //if(arr[x]>=0) continue;
        for(int y=0; y<n;y++){
            if(//arr[y]>=0||
            x==y)continue;
        for(int z=0; z<n;z++){
            if(//arr[z]<0||
            z==x||z==y) continue;
          mx=max(mx,arr[x]*arr[y]*arr[z]);          
   }
   }

   }
   /* for(int x=0; x<n;x++){
        if(arr[x]<0) continue;
        for(int y=0; y<n;y++){
            if(arr[y]<0||x==y)continue;
        for(int z=0; z<n;z++){
            if(arr[z]<0||z==x||z==y) continue;
          mx=max(mx,arr[x]*arr[y]*arr[z]);          
   }
   }
   }*/

    cout << mx;
    return 0;
}