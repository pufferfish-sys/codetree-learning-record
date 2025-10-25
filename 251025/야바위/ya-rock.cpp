#include <iostream>
#include <algorithm>

using namespace std;

int N;
int a[100], b[100], c[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    int max1=0;
    for(int i=1;i<=3;i++){
        int cnt=0;
        int stone[4]={0,};
        stone[i]=1;
        for(int j=0;j<N;j++){
            int temp = stone[b[j]];
            stone[b[j]]=stone[a[j]];
            stone[a[j]]=temp;
            if(stone[c[j]]==1) cnt++;
        }
        max1=max(cnt,max1);
    }
    cout << max1;

    // Please write your code here.

    return 0;
}