#include <iostream>

using namespace std;

int n;
void printStar(int a){
    if (a == 0) return;
    for(int i = 0; i < a; i++ ){
        cout << "* ";
    }
    cout << endl;
    printStar(a-1);
    for(int i = 0; i < a; i++ ){
        cout << "* ";
    }
    cout << endl;
}

int main() {
    cin >> n;

    printStar(n);

    return 0;
}