#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    int min1=INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]*=2;

        for(int j=0;j<n;j++){
            int newarr[100];
            int cnt=0;
            for(int k=0;k<n;k++){
                if(k!=j) newarr[cnt++] = arr[k];}
            int sum_diff=0;
            for(int k=0;k<n-2;k++){
                sum_diff +=abs(newarr[k+1]-newarr[k]);
            }
            min1=min(sum_diff,min1);
        }
        arr[i]/=2;
    }
    cout << min1;
    return 0;
}