#include <iostream>
#include <climits>
using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    int min_square=INT_MAX;
    for(int i=0; i<N;i++){
        int maxy=0,maxx=0,minx=40001,miny=40001;
        for(int j=0;j<N;j++){
            if(j==i) continue;
            maxy = max(maxy,y[j]);
            maxx = max(maxx,x[j]);
            miny = min(miny,y[j]);
            minx = min(minx,x[j]);
        }
        int square =(maxy-miny)*(maxx-minx);
        min_square = min(square,min_square); 
    }
    cout<<min_square;
    // Please write your code here.

    return 0;
}