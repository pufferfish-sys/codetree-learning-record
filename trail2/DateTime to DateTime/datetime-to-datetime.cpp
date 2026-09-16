#include <iostream>

using namespace std;

int a, b, c;
int day = 11;
int hour = 11;
int min1 = 11; 
int main() {
    cin >> a >> b >> c;
    
    int count = 0 ;
    if(a < 11 || (a==11 && b < 11) || (a==11 && b==11 && c<11 )  ) {cout << "-1"; return 0;}
    while(true){
        if(day==a && hour == b && min1 == c) break;
        min1++;
        count ++;
        if(min1 >= 60) {hour++; min1 = 0;}
        if(hour >= 24) {day++; hour = 0;} 

    }
    cout << count;
    

    return 0;
}