#include <iostream>

using namespace std;

int y;

bool IsMagicYear(int a){
    if(a%4==0){
        if(a%100==0 && a%400!=0) return false;
        else return true;
    }
    else return false;

}



int main() {
    cin >> y;
    if(IsMagicYear(y)) cout << "true";
    else cout << "false";
    // Please write your code here.

    return 0;
}