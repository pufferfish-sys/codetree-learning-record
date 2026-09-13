#include <iostream>

using namespace std;

int N;

void printHello(int a){
    if(a == 0) return;
    
    printHello(a - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;
    printHello(N);
    // Please write your code here.

    return 0;
}