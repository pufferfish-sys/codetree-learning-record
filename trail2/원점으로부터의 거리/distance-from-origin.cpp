#include <iostream>
#include <algorithm>

using namespace std;

int N;
int x[1000];
int y[1000];

class Distance{
    public :
        int x;
        int y;
        int number;
    Distance(int x, int y, int number)
    : x(x),y(y),number(number){}
    Distance(){}
};

Distance distance1[1000];

bool cmd(Distance a, Distance b){
    if(abs(a.x)+abs(a.y) != abs(b.x)+ abs(b.y)) return abs(a.x)+abs(a.y) < abs(b.x)+ abs(b.y);
    return a.number < b.number; 
}


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        distance1[i]= Distance(x[i],y[i],i+1);
    }
    sort(distance1,distance1+N,cmd);
    for (int i = 0; i < N; i++) {
        cout << distance1[i].number << endl;
    }

    // Please write your code here.

    return 0;
}
