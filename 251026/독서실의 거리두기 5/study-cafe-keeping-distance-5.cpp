#include <iostream>
#include <string>

using namespace std;

int N;
string seat;

int main() {
    cin >> N;
    cin >> seat;
    int maxdis=0;

        for(int j=0;j<N;j++){
            if(seat[j]!='0') continue;
            int distance1=N, distance2=N;
            for(int k=j+1;k<N;k++){
                if(seat[k]=='1') {distance1 = k-j;break;}
            }
            for(int k=j-1;k>=0;k--){
                if(seat[k]=='1') {distance2 = j-k; break;}
            }
            int mindis = min(distance1,distance2);
            maxdis = max(mindis,maxdis);
        }
    
    cout << maxdis;
    

    return 0;
}