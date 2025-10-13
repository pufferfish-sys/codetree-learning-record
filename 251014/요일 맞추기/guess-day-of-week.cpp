#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int month = m1, day =d1;
    int num_of_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int days_from_start = 0;

    for(int m = m1; m < m2; m++){ 
    days_from_start += num_of_days[m];}
    days_from_start += d2 - d1;

    int week_index = (1 + days_from_start) % 7;
    if(week_index == 0) week_index = 7;

    string week_of_days[8] = {"","Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    cout << week_of_days[week_index];



    return 0;
}