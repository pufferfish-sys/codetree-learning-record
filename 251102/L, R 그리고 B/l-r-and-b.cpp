#include <iostream>

using namespace std;

char board[10][10];

int main() {
    int loc1,loc2,loc3,loc4,loc5,loc6;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> board[i][j];
            if(board[i][j]=='B') {loc1=i;loc2=j;}
            else if(board[i][j]=='R') {loc3=i;loc4=j;}
            else if(board[i][j]=='L') {loc5=i;loc6=j;}
        }
    }
    int cnt=0;
    if((loc1==loc3&&loc3==loc5)||(loc2==loc4&&loc4==loc6)){
        cnt=abs(loc1-loc5)+abs(loc2-loc6)+2;
    }
    else{
        cnt=abs(loc1-loc5)+abs(loc2-loc6)-1;
    }
    cout << cnt;

    

    return 0;
}