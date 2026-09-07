#include <iostream>
using namespace std;


void star10(){
    for(int i = 0; i<10; i++){
        cout << "*";
    }
    cout << endl;
}

int main() {
    for(int i=0;i<5;i++){
        star10();
    }
    return 0;
}