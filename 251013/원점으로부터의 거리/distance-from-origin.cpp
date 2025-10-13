#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
int x[1000];
int y[1000];
class Compare{
    public: int a,b,n;
        Compare(){}
        Compare(int a, int b,int n){
            this -> a=a;
            this -> b=b;
            this -> n=n;
        }
};
bool cmp(Compare A, Compare B) {
    return (abs(A.a) + abs(A.b)) < (abs(B.a) + abs(B.b));
}
Compare com[1000];
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        com[i] = Compare(x[i],y[i],i+1);
    }
    sort(com,com+N,cmp);
    for (int i = 0; i < N; i++) {
        cout << com[i].n<<endl;
    }

    return 0;
}
