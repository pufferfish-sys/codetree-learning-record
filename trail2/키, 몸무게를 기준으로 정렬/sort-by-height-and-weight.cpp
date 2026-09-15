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

Info s[10];

bool cmd(Info a, Info b){
    if(a.height != b.height) return a.height < b.height;
    return a.weight > b.weight;  
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        s[i] = Info(name[i],height[i],weight[i]);
    }

    sort(s,s+n,cmd);

    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].height << " " << s[i].weight << endl;
    }
    

    return 0;
}