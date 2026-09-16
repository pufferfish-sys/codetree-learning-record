#include <iostream>
#include <algorithm>

using namespace std;

int N;
int sequence[1000];

class Info{
    public:
        int sequence;
        int number;
    Info(int sequence, int number)
    : sequence(sequence), number(number){}

    Info(){} 
};

Info info[1000];

bool cmd(Info a, Info b){
    if(a.sequence != b.sequence) return a.sequence < b.sequence;
    return a.number < b.number;  
}

int main() {
    cin >> N;

    int index[1000];

    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        info[i] = Info(sequence[i],i+1);
    }

    sort(info,info+N,cmd);

    for (int i = 0; i < N; i++){
        index[info[i].number] = i+1;
    }

    for (int i = 0; i < N; i++){
        cout << index[i+1] << " ";
    }


    

    return 0;
}
