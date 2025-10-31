#include <iostream>
#include <string>

using namespace std;

int N;
string seats;

int main() {
    cin >> N;
    cin >> seats;
    int last = -1;
    int mindistance =1001;
    int start, end;
    for(int i=0;i<N-1;i++){
        if (seats[i]=='0') continue;
        int distance = 0;
        for(int j=i+1;j<N;j++){
            if(seats[j]=='1') {distance = j-i;
            mindistance = min(mindistance,distance);
            if(distance==mindistance) {start=i;end=j;} 
            }  
        }
    }
    

    cout << (end-start+1)/2; 
    

    return 0;
}