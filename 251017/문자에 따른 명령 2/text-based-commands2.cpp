#include <iostream>


using namespace std;


int main() {
    string s;      
    cin>> s;
    int nx = 0, ny = 0;
    int dir = 3; 
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0,-1, 0, 1};
    int i = 0;
    while(true){
        if(i == s.length()){
            break;
        }
        if(s[i] == 'F'){
            nx += dx[dir];
            ny += dy[dir];
        }else{
            if(s[i] == 'L') dir--;
            else dir++;
        }
        if(dir>3){
            dir=0;
        }
        if(dir < 0){
            dir  = 3;
        }
        i++;
    }
    cout<< nx << ' '<< ny; 
    return 0;
}
