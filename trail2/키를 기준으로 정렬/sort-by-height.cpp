#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Info{
    public :
        string name;
        int height;
        int weight;
    Info(string name, int height, int weight)
    : name(name), height(height), weight(weight){}

    Info(){}
};

bool cmd(Info a,Info b){
    return a.height < b.height;
}

Info info[10];


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
        info[i] = Info(name[i], height[i], weight[i]);
    }
    sort(info,info + n,cmd);

    for (int i = 0; i < n; i++) {
        cout << info[i].name << " ";
        cout << info[i].height << " ";
        cout << info[i].weight << endl;
    }

    // Please write your code here.

    return 0;
}