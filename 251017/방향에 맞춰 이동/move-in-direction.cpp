#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
int dx[100]={0,},dy[100]={0,};
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }
    for(int i=0;i<n;i++){
        if(dir[i]=='N') dy[i]+=dist[i];
        else if(dir[i]=='S') dy[i]-=dist[i];
        else if(dir[i]=='W') dx[i]-=dist[i];
        else if(dir[i]=='E') dx[i]+=dist[i];
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        x+=dx[i];
        y+=dy[i];
    }
    cout << x<<" "<<y;

    // Please write your code here.

    return 0;
}