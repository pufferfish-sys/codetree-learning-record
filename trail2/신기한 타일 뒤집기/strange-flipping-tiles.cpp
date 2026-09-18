#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];
int blocks[200001] = {0,};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    int current = 100000;
     for (int i = 0; i < n; i++) {
        if(dir[i]=='R'){
            for(int j = 0; j < x[i]; j++){
                blocks[current] = 1;
                current++;
            }
            current--;
        }
        else{
            for(int j = 0; j < x[i]; j++){
                blocks[current] = 2;
                current--;
            }
            current++;
        }
    }
    int w = 0, b = 0;    
    for(int i = 0; i < 200001 ; i++){
        if(blocks[i]==2) w++;
        else if(blocks[i]==1) b++;
    }
    cout << w << " " << b ;

    return 0;
}