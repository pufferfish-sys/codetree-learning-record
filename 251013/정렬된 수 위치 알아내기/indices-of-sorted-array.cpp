#include <iostream>
#include <algorithm>
using namespace std;

int N;
int sequence[1001];
class Seq{
    public:int s,n;
    Seq(){}
    Seq(int s, int n){
        this -> s=s;
        this -> n=n; 
    }
};
bool cmp(Seq a,Seq b){
    if(a.s==b.s) return a.n<b.n;
    return a.s<b.s;

}
Seq seq1[1001];
int new_pos[1001]; 
int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> sequence[i];
        seq1[i] = Seq(sequence[i],i); 
    }
    sort(seq1+1,seq1+N+1,cmp);
    for (int i = 1; i <= N; i++) {
        int index = seq1[i].n;
        new_pos[index] = i;
    }

    for (int i = 1; i <= N; i++) {
        cout << new_pos[i] << " ";
    }
    cout << endl;

    return 0;
}
