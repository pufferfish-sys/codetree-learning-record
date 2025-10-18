#include <iostream>
#include <math.h>
using namespace std;

string a;

int main() {
    cin >> a;
    int max1=0,flag=0,num=0;
        for(int j=1;j<a.size();j++){
            if(a[j]=='0'){
                flag=1;
            a[j]='1';
            for(int k=0;k<a.size();k++){
                num=num*2+(a[k]-'0');
            }
            break;
            }
        }
        if(flag==0){
        a[a.size()-1]='0';
        for(int k=0;k<a.size();k++){
                num=num*2+(a[k]-'0');
            }
        }
    cout <<num;


    return 0;
}