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

    Info(int height, int weight, int number):
    height(height),weight(weight),number(number){}

    Info(){}

};

Info student[1000];

bool cmd(Info a, Info b){
    if(a.height != b.height) return a.height > b.height;
    if(a.weight != b.weight) return a.weight > b.weight;
    return a.number < b.number; 

}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        student[i] = Info(h[i],w[i],i+1);
    }

    sort(student,student+N,cmd);

    for (int i = 0; i < N; i++) {
        cout << student[i].height << " " 
        << student[i].weight << " "
        << student[i].number << endl;
    }


    return 0;
}
