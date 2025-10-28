#include <iostream>
#include <algorithm>
using namespace std;

int N;
int heights[1000];
int cntlow=0,cnthigh=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    while(1){
    int cnt1=0,cnt2=0;
    int min1=101,max1=0; 
    for(int i = 0; i < N; i++){
        min1=min(min1,heights[i]);
    }
    for(int i = 0; i < N; i++){
        max1=max(max1,heights[i]);
    }
    int diff=max1-min1;
    if(diff<=17) break;
    for(int i = 0; i < N; i++){
       if(heights[i]==min1) cnt1++;
       else if(heights[i]==max1) cnt2++;
    }

    if(cnt1<cnt2){
        cntlow+=cnt1;
        for(int i = 0; i < N; i++){
            if(heights[i]==min1) heights[i]++;
        }
    }
    else{
        cnthigh+=cnt2;
        for(int i = 0; i < N; i++){
            if(heights[i]==max1) heights[i]--;
        }
    }
         
    }
    int cost = cntlow*cntlow+cnthigh*cnthigh;
    cout << cost;
    return 0;
}