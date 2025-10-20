#include <iostream>
#include <string>

using namespace std;

int dx[8] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
int ans=0;
int N, M;
string arr[50];
bool range(int x,int y){
    return x>=0&&x<N&&y>=0&&y<=M;
}
int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for(int j=0; j<M; j++)cin >> arr[i][j];
    } 

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]!='L') continue;
            
            for(int k=0;k<8;k++){
                int cnt =1;
                int x = i;
                int y = j;
                while(1){
                    int x1 = x+dx[k];
                    int y1 = y+dy[k];
                    if(!range(x1,y1)) break;
                    x= x+dx[k];
                    y= y+dy[k];
                    if(arr[x][y]!='E') break;
                    cnt++;
                    if(cnt==3) {ans++; break;} 
                }
            }

        }
    }
    cout << ans;
    // Please write your code here.

    return 0;
}