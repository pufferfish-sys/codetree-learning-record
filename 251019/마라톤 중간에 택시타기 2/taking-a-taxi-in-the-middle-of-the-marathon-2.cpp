#include <iostream>
#include <climits>
using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int mi=INT_MAX;
    for(int i=1;i<n-1;i++){
        int distance =0;
        for(int j=0;j<n-1;j++){
            if(j==i-1){
                distance+=abs(x[j]-x[j+2])+abs(y[j]-y[j+2]);
            }
            else if(j==i){
                continue;
            }
            else{
                distance+=abs(x[j]-x[j+1])+abs(y[j]-y[j+1]);
            }
        }
        mi = min(distance,mi);
    }
    cout << mi;
    

    return 0;
}