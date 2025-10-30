#include <iostream>

using namespace std;

int X;
int cnt=0;

int main() {
    cin >> X;
    int speed=1;
    int time=0;
    while(cnt<X){
        cnt += speed;

        int remain = X-cnt;
        if((speed+1)*(speed+2)/2<=remain) speed++;
        else if((speed+1)*(speed)/2<=remain){}
        else speed--;

        time++;
    }


    cout << time;

    return 0;
}