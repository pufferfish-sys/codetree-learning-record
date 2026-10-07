#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int checked[201] = {0,};

int main() {
    cin >> n;
    int offset = 100;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    for (int i = 0; i < n; i++){
        for(int j = x1[i]+100; j < x2[i]+100; j++){
            checked[j]++;
        }

    }
    int mx = -1;
    for(int i = 0 ; i < 201; i++){
        mx = max(mx,checked[i]);
    }
    cout << mx;
    

    return 0;
}