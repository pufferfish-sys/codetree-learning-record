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
        int sum=0;
        for(int i=1;i<=speed+1;i++){
        sum+=i;
        }
        if(sum<=X-cnt) speed++;
        else if(sum-speed-1<=X-cnt){}
        else speed--;

        time++;
    }


    cout << time;

    return 0;
}