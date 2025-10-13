#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Student{
    public: string na; int s1,s2,s3;
    Student(){}
    Student(string na, int s1,int s2,int s3){
        this -> na=na;
        this -> s1=s1;
        this -> s2=s2;
        this -> s3=s3;
    }  
};
bool cmp(Student a, Student b){
    return a.s1+a.s2+a.s3<b.s1+b.s2+b.s3;
}

Student students[10];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
        students[i]=Student(name[i],score1[i],score2[i],score3[i]);
    }
    sort(students,students+n,cmp);
    for (int i = 0; i < n; i++) {
        cout << students[i].na<<" ";
        cout << students[i].s1<<" ";
        cout << students[i].s2<<" ";
        cout << students[i].s3<<endl;
        }

    return 0;
}