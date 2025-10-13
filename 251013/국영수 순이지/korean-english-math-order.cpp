#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Student {
public:
    string na; // 이름은 string
    int kor,eng,ma;

    Student() {}
    Student(string na, int kor, int eng,int ma) {
        this->na = na;
        this->kor = kor;
        this->eng = eng;
        this->ma =ma;
    }
};

bool cmp(Student a, Student b){
    if(a.kor == b.kor){
        if(a.eng == b.eng)return a.ma > b.ma;

        return a.eng > b.eng;} 
    return a.kor>b.kor;
}
Student students[10];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
        students[i]= Student(name[i],korean[i],english[i],math[i]);
    }
    sort(students,students+n,cmp);
    for(int i=0;i<n;i++){
        cout << students[i].na<<" "<< students[i].kor<< " ";
        cout << students[i].eng<<" "<< students[i].ma<<endl;
    }
    // Please write your code here.

    return 0;
}