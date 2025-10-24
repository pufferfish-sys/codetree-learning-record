#include <iostream>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }
    int max_work=0;

        for(int j=0;j<=1000;j++){
            int work=0;
        for(int i=0;i<N;i++){
            if(j<Ta[i]) work+=C;
            else if(j>=Ta[i]&&j<=Tb[i]) work+=G;
            else if(j>Tb[i]) work+=H;
        }
        max_work=max(max_work,work);
    }
    cout <<max_work;
    // Please write your code here.

    return 0;
}