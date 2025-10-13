#include <iostream>

using namespace std;

int a, b, c;

int main() {
    int day=11; int hour =11; int min =11;
    int min2=0;
    cin >> a >> b >> c;
    while(true){
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