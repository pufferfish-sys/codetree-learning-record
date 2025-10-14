#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    int cnt=0;
    int num = 0;
    int digits[20] ={};
    for (int i = 0; i < binary.size(); i++)
        num = num * 2 + (binary[i] - '0');
    num*=17;
    while (true){
        if(num<2){
            digits[cnt++] =num;
            break;
        }
        digits[cnt++]=num%2;
        num/=2;
    }
    for(int i=cnt-1;i>=0;i--)
    cout <<digits[i];
    return 0;
}
