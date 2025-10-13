#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

string name[5];
int height[5];
double weight[5];

class Student{
    public: string na;int hei;double wei;
    Student(){}
    Student(string na, int hei,double wei){
        this -> na=na;
        this -> hei=hei;
        this -> wei=wei;
    }  
};
bool cmp1(Student a, Student b){
    return a.na<b.na;
}
bool cmp2(Student a, Student b){
    return a.hei>b.hei;
}
Student students[5];
int main() {
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        students[i] = Student(name[i],height[i],weight[i]); 
    }
    
    sort(students,students+5,cmp1);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++){
        cout << students[i].na << " ";
        cout << students[i].hei << " ";
        cout<<fixed<<setprecision(1) << students[i].wei << endl;
    }
    sort(students,students+5,cmp2);
    cout << endl <<"height" << endl;
    for (int i = 0; i < 5; i++){
        cout << students[i].na << " ";
        cout << students[i].hei << " ";
        cout << fixed <<setprecision(1) << students[i].wei << endl;
    }
    // Please write your code here.

    return 0;
}