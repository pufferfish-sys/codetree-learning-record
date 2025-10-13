#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    int hour =a,mins=b;
    int min2=0;
    while(true){
        if(hour ==c && mins ==d) break;
        
        min2++;
        mins++;
        if(mins==60){
            hour++;
            mins = 0;
        }
    }
    cout << min2;

    return 0;
}