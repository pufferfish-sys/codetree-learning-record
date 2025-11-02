#include <iostream>
#include <algorithm>

using namespace std;

int n;
char c[100];
int s[100];
int a = 0 ,b =0, c1=0;
int status=7;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(c[i]=='A') a+=s[i];
        else if(c[i]=='B') {b += s[i];}
        else {c1 += s[i];}

        int mx = max({a,b,c1});
        int curState = 0;
        if(a == mx) curState+=1;
        if(b == mx) curState+=2;
        if(c1 == mx) curState+=4;
        
        if(status!=curState){
            status = curState;
            cnt++;
        }
        
        }
        
           
    cout << cnt;

    return 0;
}