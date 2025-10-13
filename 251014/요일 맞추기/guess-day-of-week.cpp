#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int month = m1, day =d1;
    int num_of_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string week_of_days[8] = {"","Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int week =1;
    int flag=1;
    if(month>m2||(month==m2&&day>d2)) flag=0;
    while(!flag){
        if(month==m2&&day==d2) break;
        day--;
        week--;
        if(week<1) week=7;
        if(day<1){
            month--;
            day=num_of_days[month];
        }
    }
    while(flag){
        if(month==m2&&day==d2) break;
        day++;
        week++;
        if(week>7) week=1;
        if(day>num_of_days[month]){
            day=1;
            month++;
        }
    }
    cout << week_of_days[week];


    return 0;
}