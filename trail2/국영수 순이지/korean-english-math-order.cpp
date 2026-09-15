#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Score{
    public :
        string name;
        int korean;
        int english;
        int math;
    
    Score(string name, int korean, int english, int math)
    : name(name), korean(korean), english(english), math(math){}

    Score() {} 
};

bool cmd(Score a, Score b){
    if(a.korean != b.korean)
        return a.korean > b.korean;
    if(a.english != b.english)
        return a.english > b.english;
    return a.math > b.math;

}

Score students[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
        students[i] = Score(name[i],korean[i],english[i],math[i]);
    }

    sort(students,students+n,cmd);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " ";
        cout << students[i].korean << " ";
        cout << students[i].english << " ";
        cout << students[i].math << endl;
    }
    

    return 0;
}