#include <iostream>

using namespace std;

int M, D;
int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool exist(int a, int b){
    if(a>=1 && a<=12){
        if(month[a] >= b && b > 0) return true;
    }

    return false;    

}

int main() {
    cin >> M >> D;
    if(exist(M,D)) cout << "Yes";
    else cout << "No";
    // Please write your code here.

    return 0;
}