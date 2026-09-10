#include <iostream>

using namespace std;

bool perfect(int a){
    if(a % 2 == 0) return false;
    if(a % 10 == 5) return false;
    if(a % 3 == 0 && a % 9 != 0) return false;
    return true;

}

int a, b;

int main() {
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <=b ; i++){
        if(perfect(i)) cnt++;
    }
    cout << cnt;
    return 0;
}