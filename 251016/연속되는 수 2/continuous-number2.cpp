#include <iostream>
#include <algorithm>
using namespace std;

int N;
int arr[1000];
int maxcnt=0,cnt=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i<N;i++){
        if(arr[i]==arr[i-1]||i==0) cnt++;
        else {maxcnt=max(maxcnt,cnt);cnt=1;} 
    }
    
    cout << maxcnt;
    

    return 0;
}