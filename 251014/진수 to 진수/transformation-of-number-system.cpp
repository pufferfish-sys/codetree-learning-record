#include <iostream>

using namespace std;

int a, b;
string n;
int digits[20]={};

void ten_to_other(int N,int B){
    int digits[20] ={};
    int cnt=0;
     while (true){
        if(N<B){
            digits[cnt++] =N;
            break;
        }
        digits[cnt++]=N%B;
        N/=B;
    }
    for(int i=cnt-1;i>=0;i--){
        cout << digits[i];
    }
}
int maketen(int j,string binary){
    int num = 0;
    for (int i = 0; i < binary.size(); i++)
        num = num * j + (binary[i] - '0');
    return num;
}
int main() {
    cin >> a >> b;
    cin >> n;
    int ten1 = maketen(a,n);
    ten_to_other(ten1,b);
    return 0;
}