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
        bool aTop = (a == mx);
        bool bTop = (b == mx);
        bool cTop = (c1 == mx);
        int curState;

        if(aTop && !bTop && !cTop) curState = 1;        // A
        else if(!aTop && bTop && !cTop) curState = 2;   // B
        else if(!aTop && !bTop && cTop) curState = 3;   // C
        else if(aTop && bTop && !cTop) curState = 4;    // A=B
        else if(aTop && !bTop && cTop) curState = 5;    // A=C
        else if(!aTop && bTop && cTop) curState = 6;    // B=C
        else curState = 7;                              // A=B=C
        if(status!=curState){
            status = curState;
            cnt++;
        }
        
        }
        
           
    cout << cnt;

    return 0;
}