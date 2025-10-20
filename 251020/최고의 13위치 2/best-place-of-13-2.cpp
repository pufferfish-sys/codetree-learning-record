#include <iostream>

using namespace std;

int N;
int arr[20][20];
int ma=0;
bool range(int x,int y){
    return x>=0&&x<N&&y>=0&&y+2<N;
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];
    for(int i=0;i<N;i++){
        for(int j=0;j<N-2;j++){
                int x1 =i,y1=j,cnt=0; 
                if(!range(x1,y1)) continue;
                cnt += arr[x1][y1]+ arr[x1][y1+1]+arr[x1][y1+2];
                for(int k=0;k<N;k++){
                    for(int l=0;l<N-2;l++){
                    int cnt2=0;
                    if(k == x1 &&abs(j-l)<=2) continue;
                    if(!range(k,l)) continue;
                    cnt2 += arr[k][l] + arr[k][l+1] + arr[k][l+2];
                    ma = max(cnt2+cnt,ma);
                    }
                }
        }
    }
    cout << ma;
    return 0;
}