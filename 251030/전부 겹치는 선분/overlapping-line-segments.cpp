#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int arr[100]={0,};
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        arr[x1[i]]++; arr[x2[i]]++;
    }
    for(int i=1;i<=100;i++){
        if(arr[i]==n) {cout << "Yes"; return 0;}
    }
    cout << "No"; 
    
    return 0;
}