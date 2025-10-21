#include <iostream>

using namespace std;

int abilities[6];

int main() {
    int sum=0;
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
        sum+=abilities[i];
    }
    int mi=1000000000;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<6;k++){
                int sum2 = abilities[i]+abilities[j]+abilities[k];
                int diff = abs(sum - 2*sum2);
                mi = min(diff,mi);
            }
        }
    }
    cout << mi;

    return 0;
}