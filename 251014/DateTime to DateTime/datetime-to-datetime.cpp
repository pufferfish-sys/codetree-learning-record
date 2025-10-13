#include <iostream>

using namespace std;

int a, b, c;

int main() {
    int day=11; int hour =11; int min =11;
    int min2=0; int flag =1;
    cin >> a >> b >> c;
    if(day>a){flag =0;min2 =-1;}
    if(day==a&&hour>b){flag =0;min2 =-1;}
    if(day==a&&hour==b&&min>c){flag =0;min2 =-1;}
    while(flag){
        
        if(day==a&&hour==b&&min==c) break;
        min++;
        min2++;
        if(min==60){
            min=0;
            hour++;
            if(hour==24){
                hour=0;
                day++;
            }
        }
    }
    cout<<min2;
    // Please write your code here.

    return 0;
}