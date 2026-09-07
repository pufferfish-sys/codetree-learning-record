#include <iostream>

using namespace std;

int n, m;

void drawsquare(int a, int b)
{
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "1";
        }
        cout << endl;
    }

}

int main() {
    cin >> n >> m;
    drawsquare(n,m);
    // Please write your code here.

    return 0;
}