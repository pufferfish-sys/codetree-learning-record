#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int day[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31};


int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int count = 1;
    while(true){
        if(m1 == m2 && d1 == d2) break;
        count++;
        d1++;
        if(d1 > day[m1]){
            d1 = 1; 
            m1++;
        }
    }
    
    cout << count;

    return 0;
}