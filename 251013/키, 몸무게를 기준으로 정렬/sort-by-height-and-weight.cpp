#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Student{
    public: string na;int hei;int wei;
    Student(){}
    Student(string na, int hei,int wei){
        this -> na=na;
        this -> hei=hei;
        this -> wei=wei;
    }  
};
bool cmp(Student a, Student b){
    if(a.hei==b.hei){
        return a.wei > b.wei;
    }
    return a.hei<b.hei;
}
Student students[10];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        students[i] = Student( name[i], height[i],weight[i]);
    }
    sort(students,students+n,cmp);
    for (int i = 0; i < n; i++) {
        cout << students[i].na <<" ";
        cout << students[i].hei <<" ";
        cout << students[i].wei <<endl;
    }


    return 0;
}