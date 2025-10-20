#include <iostream>
#include <string>

using namespace std;
int arr[19][19];

int dx[8] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

int InRange(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}
int main() {
    for(int i = 0; i < 19; i++)
        for(int j = 0; j < 19; j++)
            cin >> arr[i][j];

    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            if(arr[i][j]==0) continue;
            for(int k=0;k<8;k++){
                int cnt =1;
                int x = i;
                int y = j;
                while(1){
                    int x1 = x+dx[k];
                    int y1 = y+dy[k];
                    if(!InRange(x1,y1)) break;
                    if(arr[x1][y1]!=arr[i][j]) break;
                    x= x1;
                    y= y1;
                    cnt++;
                    if(cnt==5) {cout << arr[i][j] << endl;
					cout << i + 2 * dx[k] + 1 << " " << j + 2 * dy[k] + 1;
					return 0;} 
                }
            }

        }
    }
    cout << 0;
    return 0;
}