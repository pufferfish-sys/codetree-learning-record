#include <iostream>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

class Info{
    public : 
    int height;
    int weight;
    int number;
    Info(int height, int weight, int number)
    : height(height), weight(weight), number(number){}
    
    Info(){}
};

bool cmd(Info a, Info b){
    if(a.height != b.height) return a.height < b.height;
    return a.weight > b.weight;
}

Info info[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        info[i] = Info(h[i],w[i],i+1);
    }
    sort(info,info+N,cmd);
    for (int i = 0; i < N; i++) {
        cout << info[i].height << " " << info[i].weight << " " << info[i].number << endl;
    }

    

    return 0;
}