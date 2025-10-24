#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;
    int cnt = 0;
    for(int i=X;i<=Y;i++){
        string s = to_string(i);
        int flag=1;
        for(int j=0;j<s.size()/2;j++){
            if(s[j]!=s[s.size()-1-j]) {flag=0;break;}
        }
        if (flag) cnt++;
    }
    
    cout << cnt;
    return 0;
}