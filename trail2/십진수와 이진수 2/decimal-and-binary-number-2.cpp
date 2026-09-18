#include <iostream>

using namespace std;

string N;
int digits[10];

int main() {
    cin >> N;
    int num = 0;
    for(int i = 0; i < (int) N.size(); i++){
        num = num * 2 + (N[i]-'0');
    }
    num *= 17;
    int cnt;
    while(true){
        if(num<2) {digits[cnt] = num; break;}
        digits[cnt] = num % 2;
        cnt++;
        num /= 2;  
    }
    for(int i = cnt; i>=0; i--){
        cout << digits[i];
    }

    return 0;
}