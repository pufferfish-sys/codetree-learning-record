#include <iostream>
#include <string>

using namespace std;

class Info{
    public :
        string date;
        string day;
        string weather;
    Info(string date, string day, string weather)
    : date(date), day(day), weather(weather){}

    Info(){}
};

int n;
string date[100];
string day[100];
string weather[100];

Info info[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        info[i] = Info(date[i],day[i],weather[i]);
    }
    int idx = -1;
    for(int i =0; i < n ; i++){
        if(info[i].weather == "Rain"){
        if(idx == -1 ||info[i].date < info[idx].date ) idx = i;
        } 
    }
    cout << info[idx].date<<" " <<info[idx].day <<" " << info[idx].weather;
    // Please write your code here.

    return 0;
}