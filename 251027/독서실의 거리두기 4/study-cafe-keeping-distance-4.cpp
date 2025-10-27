#include <iostream>
#include <string>

using namespace std;

int N;
string seat;

int main() {
    cin >> N;
    cin >> seat;
    int ans = 0;
    for(int i=0; i<N; i++){
        if(seat[i]=='0'){
            for(int j=i+1; j<N; j++){
                if(seat[j]=='0'){
            seat[i]='1';
            seat[j]='1';
            int mindistance =101;
            int last = -1;
            for(int x=0;x<N;x++){
                if(seat[x]=='1'){
                    if(last!=-1){
                        int distance = x - last;
                        mindistance = min(mindistance,distance);
                        last = x; 
                    }
                    else last = x;
                }
            
            }
            ans = max(mindistance,ans);
            seat[j]='0';
            seat[i]='0';

        }
        }
        }
    }
    cout << ans;
    return 0;
}