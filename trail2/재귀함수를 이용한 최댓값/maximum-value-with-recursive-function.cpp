#include <iostream>

using namespace std;

int n;
int arr[100];

int findmax(int a){
    if(a==0) return arr[0];

    return max(findmax(a-1), arr[a]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findmax(n-1);
    // Please write your code here.

    return 0;
}