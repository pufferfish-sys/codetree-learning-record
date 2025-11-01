#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N;
string seats;

int main() {
    cin >> N;
    cin >> seats;
    int ans=0;
    for(int x=0;x<N;x++){
        if(seats[x]=='1') continue;
        seats[x]='1';
        int mindis = 1001;
        for(int i=0;i<N-1;i++){    
            if(seats[i]=='0') continue;
            for(int j=i+1;j<N;j++){
            if(seats[j]=='1'){
                mindis = min(j-i,mindis);
                break;
            }
            }
        }
        ans = max(mindis,ans);
        seats[x]='0';
    }
    
    cout << ans;

    return 0;
}