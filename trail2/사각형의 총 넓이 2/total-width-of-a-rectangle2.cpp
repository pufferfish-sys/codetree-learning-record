#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int arr[201][201];

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    int offset = 100;
    for(int i = 0; i < N; i++){
        for(int j = offset + x1[i]; j < offset + x2[i]; j++){
            for(int k = offset + y1[i]; k < offset + y2[i]; k++){
                arr[j][k]++;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 200; j++){
            if(arr[i][j] >=1) ans++; 
        }
    }
    cout << ans;

    return 0;
}