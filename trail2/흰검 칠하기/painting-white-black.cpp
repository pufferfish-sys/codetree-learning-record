#include <iostream>

using namespace std;

int blocks_color[200001];
int white[200001];
int black[200001];

int main() {
    int n;
    cin >> n;

    const int OFFSET = 100000;
    int cur = OFFSET;

    for(int i = 0; i < n; i++) {
        int x;
        char dir;

        cin >> x >> dir;

        if(dir == 'L') {
            for(int j = 0; j < x; j++) {
                white[cur]++;
                blocks_color[cur] = 1;
                cur--;
            }
            cur++;
        }
        else {
            for(int j = 0; j < x; j++) {
                black[cur]++;
                blocks_color[cur] = 2;
                cur++;
            }
            cur--;
        }
    }

    int w = 0, b = 0, g = 0;

    for(int i = 0; i <= 200000; i++) {
        if(white[i] >= 2 && black[i] >= 2)
            g++;
        else if(blocks_color[i] == 1)
            w++;
        else if(blocks_color[i] == 2)
            b++;
    }

    cout << w << " " << b << " " << g;

    return 0;
}