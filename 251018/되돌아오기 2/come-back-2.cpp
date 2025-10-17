#include <iostream>
#include <string>

using namespace std;

string commands;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int dir_num=0;
int x=0,y=0,cnt=0;
int main() {
    cin >> commands;
    for(int i=0;i<commands.size();i++){
        if(commands[i]=='L'){
            dir_num=(dir_num-1+4)%4;
            cnt++;
        }
        else if(commands[i]=='R'){
            dir_num=(dir_num+1)%4;
            cnt++;
        }
        else{
            x+=dx[dir_num];
            y+=dy[dir_num];
            cnt++;
            if(x==0&&y==0){ cout<<cnt;return 0;}
        }
    }
    cout << -1;
    return 0;
}