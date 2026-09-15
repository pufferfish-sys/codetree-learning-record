#include <iostream>
#include <algorithm>

using namespace std;

string name[5];
int height[5];
double weight[5];

class Info{
    public :
        string name;
        int height;
        double weight;
    
    Info(string name, int height, double weight)
    : name(name), height(height), weight(weight){}
    Info(){}
};

Info s[5];

bool cmd1(Info a, Info b){
    return a.name < b.name;
}

bool cmd2(Info a, Info b){
    return a.height > b.height;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        s[i] = Info(name[i], height[i], weight[i]);
    }
    cout << fixed;
    cout.precision(1);
    
    cout << "name" << endl;
    sort(s,s+5,cmd1);
     for (int i = 0; i < 5; i++) {
        cout << s[i].name <<" " << s[i].height << " " << s[i].weight << endl;
    }

    cout << endl;

    sort(s,s+5,cmd2);
    cout << "height" << endl;
    for (int i = 0; i < 5; i++) {
        cout << s[i].name <<" " << s[i].height << " " << s[i].weight << endl;
    }

    return 0;
}