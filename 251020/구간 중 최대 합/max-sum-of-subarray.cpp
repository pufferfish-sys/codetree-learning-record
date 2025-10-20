#include <iostream>
#include <climits>
using namespace std;

int n, k;
int arr[100];

int main() {
    int ma=INT_MIN;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-k+1; i++){
        int sum =0; 
        for(int j=i;j<i+k;j++) {
            sum+=arr[j];
        }
        ma=max(ma,sum);
    }
    cout << ma;

    return 0;
}