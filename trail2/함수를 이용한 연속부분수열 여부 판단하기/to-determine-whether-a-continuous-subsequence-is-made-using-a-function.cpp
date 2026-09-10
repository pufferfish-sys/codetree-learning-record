#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool isSame1(int x){
    for(int i = 0; i < n2; i++){
        if(a[x+i] != b[i]) return false;  
    }    
    return true;
}

bool magicPart(){
    for(int i = 0 ; i <= n1 - n2; i++){
        if(isSame1(i)) return true;
    }
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if(magicPart()) cout << "Yes";
    else cout << "No";
    
    // Please write your code here.

    return 0;
}