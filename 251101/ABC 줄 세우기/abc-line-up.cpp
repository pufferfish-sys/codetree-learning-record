#include <iostream>

using namespace std;

int n;
char arr[26];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int cnt = 0 ;
    for(int x=0;x<n;x++){
        for(int i=0;i<n;i++){
        if(arr[i]=='A'+x){
            int j = i;
            while(arr[x]!='A'+x){
            swap(arr[j],arr[j-1]);
            cnt ++;
            j--;
            }
            break;
        }
        
    }
    }
    cout << cnt;

    return 0;
}