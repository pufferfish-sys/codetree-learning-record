#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int block[200]={0,};
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    for(int i=0;i<n;i++){
        for(int j =x1[i]+100;j<x2[i]+100;j++){
            block[j]++;
        }
    }
 int max_value = 0;
    for (int i = 0; i < 200; i++) {
        if (block[i] > max_value)
            max_value = block[i];
    }

    cout << max_value;

    return 0;
}