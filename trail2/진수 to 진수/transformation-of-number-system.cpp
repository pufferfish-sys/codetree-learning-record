#include <iostream>

using namespace std;

int a, b;
string n;
int digits[30];


int main() {
    cin >> a >> b;
    cin >> n;

    int num = 0;
    int cnt=0;

    for(int i = 0; i < (int) n.size(); i++){
        num = num*a + (n[i] - '0');    
    }

    while(true){
        if(num<b) {digits[cnt++]=num; break;}
        digits[cnt++] = num % b;
        num /= b;
    }

    for(int i = cnt-1; i >= 0; i--){
        cout << digits[i];
    }
    cout << '\n';

    return 0;
}