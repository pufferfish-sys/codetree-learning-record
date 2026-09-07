#include <iostream>

using namespace std;

int N;

void drawsquare(int n){
    int count = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            cout << count << " ";
            count++;
            if(count > 9) count = 1;
        }
    cout << endl;
    }

}

int main() {
    cin >> N;
    drawsquare(N);
    // Please write your code here.

    return 0;
}