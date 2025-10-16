#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int dir2;
        if(dir[i]=='N') dir2 =2;
        else if(dir[i]=='S') dir2=3;
        else if(dir[i]=='W') dir2 =1;
        else dir2=0;
        x += dx[dir2]*dist[i];
        y += dy[dir2]*dist[i];
    }
    
    cout << x<<" "<<y;


    return 0;
}