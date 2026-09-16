#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;

string day[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
int date[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;
    int find_index;
    for(int i = 0 ; i < 7 ; i++ ){
        if(A == day[i]) { find_index = i; break;}
    }
    int ans_cnt = 0;
    int day_index = 0;
    while(true){
        if(day_index == find_index) ans_cnt++; 
        if(m1 == m2 && d1 == d2){break;}
        d1++;
        day_index++;
        if(day_index>=7) day_index=0;
        if(d1 > date[m1]) {m1++; d1=1;}

    }
    cout << ans_cnt;
    

    return 0;
}