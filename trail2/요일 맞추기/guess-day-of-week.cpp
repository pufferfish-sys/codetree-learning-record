#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int day_number[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string day[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int main() {

    cin >> m1 >> d1 >> m2 >> d2;

    int cnt_day = 0;
    int index = 0;
    bool plus_mode = true;

    if(m2 < m1 || (m1==m2 && d2 < d1)) plus_mode = false; 

    while(plus_mode){
        if(m1==m2 && d1==d2) break;
        index++;
        if(index >= 7) index = 0;
        d1++;
        if(d1 > day_number[m1]) {m1++; d1 =1;}
    }
    
    while(!plus_mode){
        if(m1==m2 && d1==d2) break;
        index--;
        if(index < 0) {index = 6;}
        d1--;
        if(d1 < 1) {m1--; d1 = day_number[m1];}
    }

    cout << day[index];
    return 0;
}