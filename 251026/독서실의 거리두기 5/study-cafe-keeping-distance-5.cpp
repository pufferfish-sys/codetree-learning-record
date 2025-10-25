#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string seat;
    cin >> N >> seat;

    int maxDist = 0;

    for(int i=0; i<N; i++){
        if(seat[i]=='0'){
            seat[i] = '1'; // 새 사람 배치

            int minDist = N; // 전체 최소 거리 초기화
            int last = -1;

            for(int j=0; j<N; j++){
                if(seat[j]=='1'){
                    if(last != -1){
                        minDist = min(minDist, j - last);
                    }
                    last = j;
                }
            }

            maxDist = max(maxDist, minDist);
            seat[i] = '0'; // 원래대로 되돌리기
        }
    }

    cout << maxDist << endl;
    return 0;
}
