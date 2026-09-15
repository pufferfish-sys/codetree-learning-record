#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Student{
    public :
        string name;
        int score1;
        int score2;
        int score3;
    Student(string name, int score1, int score2, int score3)
    : name(name), score1(score1), score2(score2), score3(score3){}
    
    Student(){}
};


bool cmd(Student a, Student b){
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;

}

Student student[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
        student[i] = Student(name[i],score1[i],score2[i],score3[i]);
    }

    sort(student,student+n,cmd);

    for (int i = 0; i < n; i++) {
        cout << student[i].name << " ";
        cout << student[i].score1 << " ";
        cout << student[i].score2 << " ";
        cout << student[i].score3 << endl;
    }


    return 0;
}