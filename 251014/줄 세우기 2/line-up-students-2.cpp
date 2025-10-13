#include <iostream>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

class Student {
public: 
    int hei,wei,n;

    Student() {}
    Student(int hei, int wei,int n) {

        this->hei = hei;
        this->wei = wei;
        this->n=n;
    }
};

// 키 기준 오름차순 정렬
bool cmp(Student a, Student b) {
    if(a.hei==b.hei) return a.wei>b.wei;
    return a.hei < b.hei;
}
Student students[1000];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        students[i] =Student(h[i],w[i],i+1);
    }
    sort(students,students+N,cmp);

     for (int i = 0; i < N; i++) {
        cout << students[i].hei << " ";
        cout << students[i].wei << " ";
        cout << students[i].n << endl;
     }
    // Please write your code here.

    return 0;
}