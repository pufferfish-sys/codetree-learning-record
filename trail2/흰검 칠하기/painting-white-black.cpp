#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];
int blocks_color[200001] = {0,};
int white[200001] = {0,};
int black[200001] = {0,};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int offset = 100000;

    for (int i = 0; i < n; i++){
        if(dir[i] == 'L'){
            for(int j = 0; j < x[i]; j++){
                white[offset]++;
                blocks_color[offset] = 1;
                offset--;
            }
            offset++;
        }
        else {
            for(int j = 0; j < x[i]; j++){
                black[offset]++;
                blocks_color[offset] = 2;
                offset++;
            }
            offset--;
        }
    }
    for(int i =0; i <= 200000; i++){
        if(white[i]>=2 && black[i]>=2) blocks_color[i] = 3;
    }

    int w = 0, b = 0, g = 0; 
    for(int i =0; i <= 200000; i++){
        if(blocks_color[i]==1) w++;
        else if(blocks_color[i]==2) b++;
        else if(blocks_color[i]==3) g++;
    }
    cout << w << " " << b << " " << g; 

    return 0;
}