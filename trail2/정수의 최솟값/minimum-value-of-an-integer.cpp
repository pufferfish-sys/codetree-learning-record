#include <iostream>

using namespace std;

int a, b, c;

int calcmin(int a, int b, int c){
    int min_val = a;
    if(min_val > b) min_val = b;
    if(min_val > c) min_val = c;

    return min_val;

}

int main() {
    cin >> a >> b >> c;

    cout << calcmin(a,b,c);
    

    return 0;
}