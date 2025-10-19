#include <iostream>
#include <string>

using namespace std;

string A;
int cnt=0;
int main() {
    cin >> A;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]=='('&&A[i+1]=='('){
            for(int j=i;j<A.size()-1;j++){
                if(A[j]==')'&&A[j+1]==')')cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}