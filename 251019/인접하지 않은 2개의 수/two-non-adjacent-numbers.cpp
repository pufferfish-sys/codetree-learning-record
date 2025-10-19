#include <iostream>
#include <climits>

using namespace std;

int n;
int numbers[100];

int ma = INT_MIN;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for(int i=0; i<n-2;i++){
        for(int j=i+2;j<n;j++){
            int num=0;
            num = numbers[i]+numbers[j];
            ma = max(ma,num);
        }
    }
    cout << ma;
    // Please write your code here.

    return 0;
}