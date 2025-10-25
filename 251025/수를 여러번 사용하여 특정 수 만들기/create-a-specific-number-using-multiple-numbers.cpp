#include <iostream>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;
    int ma=0;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            int sum = A*i + B*j;
            if(sum<=C){
                ma=max(sum,ma);
            }
        }
    }
    cout << ma;
    return 0;
}