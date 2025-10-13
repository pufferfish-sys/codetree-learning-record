#include <iostream>
#include <string>
using namespace std;

#define MAX_N 100

class WeatherInfo {
    public:
        string date;
        string day;
        string weather;

        WeatherInfo(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }

        WeatherInfo() {}
};

int main() {
    int n;
    cin >> n;

    int rain[MAX_N];    //비가 오는날의 index을 저장하는 배열
    WeatherInfo wi[MAX_N];

    for(int i=0; i<n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;

        wi[i] = WeatherInfo(date, day, weather);
    }

    int idx = 0;    //비가 오는날이 몇 일인지를 구하기 위한 변수
    for(int i=0; i<n; i++) {
        if(wi[i].weather == "Rain")
            rain[idx++] = i;    //rain[n] : n번째로 비오는 날의 인덱스
    }

    string min_date = wi[rain[0]].date;  //가장 빨리 비가 오는 날을 구하기 위해 설정한 최소값을 저장하는 변수
    int min_idx = 0;        //최소값일 때의 index을 저장하기 위한 변수
    for(int i=1; i<idx; i++)
        if(wi[rain[i]].date < min_date) {
            min_date = wi[rain[i]].date;
            min_idx = i;
        }

    cout << wi[rain[min_idx]].date << " " << wi[rain[min_idx]].day << " " << wi[rain[min_idx]].weather;


    return 0;
}
