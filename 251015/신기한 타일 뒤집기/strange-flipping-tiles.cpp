#include <iostream>
using namespace std;

int n;
int x[1000];
char dir[1000];

int block[200000]={0,};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> dir[i];

    int spot = 100000;

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            for (int j = spot; j < spot + x[i]; j++) {
                block[j]=1;
            }
            spot += x[i]-1;
        } else { // L
            for (int j = spot; j > spot - x[i]; j--) {
                block[j] = 2;
            }
            spot -= x[i]-1;
        }
    }

    int white = 0, black = 0;
    for (int i = 0; i < 200000; i++) {
        if (block[i] == 2) white++;
        else if (block[i] == 1) black++;
    }
    cout << white << " " << black;
    return 0;
}
