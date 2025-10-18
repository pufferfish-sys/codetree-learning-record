#include <iostream>
#include <string>

using namespace std;

string A;
int cnt=0;
int main() {
    cin >> A;
    for(int i=0;i<A.size();i++){
        if(A[i]=='('){
            for(int j=i;j<A.size();j++){
                if(A[j]==')')cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}