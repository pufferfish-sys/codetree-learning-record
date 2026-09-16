#include <iostream>

using namespace std;

int N, B;
int digits[20];
int cnt;

int main() {
    cin >> N >> B;

    while(true){
        if(N<B){
        digits[cnt++]=N; 
        break;}
        digits[cnt++] = N % B; 
        N /= B;
    }
    for(int i = cnt -1 ; i >=0; i-- ){
        cout << digits[i];
    }

    return 0;
}