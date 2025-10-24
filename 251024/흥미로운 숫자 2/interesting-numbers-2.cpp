#include <iostream>
#include <algorithm>
using namespace std;

int X, Y;



int main() {
    cin >> X >> Y;
    int fun = 0;
    for(int i=X;i<=Y;i++){
        int arr[7]={-1,};
        int d = i;
        int arrnum=0;
        while(d>0){
            int num = d%10;
            arr[arrnum]=num;
            d /=10;
            arrnum++;
        }
        sort(arr,arr+arrnum);

        if((arr[0]!=arr[arrnum-1]&&arr[0]==arr[arrnum-2])||
        (arr[0]!=arr[1]&&arr[1]==arr[arrnum-1])) fun++;
    }
    cout << fun;

    return 0;
}