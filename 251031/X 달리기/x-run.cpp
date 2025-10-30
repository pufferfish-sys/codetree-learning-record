#include <iostream>

using namespace std;

int X;
int cnt=0;
int main() {
    cin >> X;
    int speed=1;
    int time=0;
    while(cnt<=X/2){
        cnt += speed;
        speed += 1;
        time++;
    }

    cout << time*2;

    return 0;
}