#include <iostream>

using namespace std;

int N;

void repeatFunc1(int n){
    if (n == 0) {return;}
    repeatFunc1(n-1);
    cout << n << " ";


}

void repeatFunc2(int n){
    
    if (n == 0) {return;}
    cout << n << " ";
    repeatFunc2(n-1); 
}


int main() {
    cin >> N;
    repeatFunc1(N);
    cout << endl;
    repeatFunc2(N);
    // Please write your code here.

    return 0;
}