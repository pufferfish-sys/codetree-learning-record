#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    cin >> n;
    cin >> str;
    int cnt=0;
    for(int i=0;i<n-2;i++){
        if(str[i]=='C'){
            for(int j=i+1;j<n-1;j++){
                if(str[j]=='O'){
                    for(int k=j+1;k<n;k++){
                        if(str[k]=='W') cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}