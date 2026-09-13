#include <iostream>
#include <string>

using namespace std;

string A;

bool findDiff(string &a){
    int len = a.length();
    for(int i = 0; i < len; i++){
        if(a[i] != a[0]) return true;
    }
    return false;


}

int main() {
    cin >> A;
    if(findDiff(A)) cout << "Yes";
    else cout << "No";
    // Please write your code here.

    return 0;
}