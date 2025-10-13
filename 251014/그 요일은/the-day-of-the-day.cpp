#include <iostream>

using namespace std;

int m1, d1, m2, d2;
string A;

int main() {
    cin >> m1 >> d1 >> m2 >> d2 >>A;
    int month = m1, day =d1;
    int num_of_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string week_of_days[8] = {"","Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int week =1,cnt=0;

    while(true){
        if(week_of_days[week]==A) cnt++;
        if(month==m2&&day==d2) break;
        day++;
        week++;
        if(week>7) week=1;
        if(day>num_of_days[month]){
            day=1;
            month++;
        }
    }
    cout << cnt;


    return 0;
}