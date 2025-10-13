#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
public:
    string na; // 이름은 string
    int hei;
    int wei;

    Student() {}
    Student(string na, int hei, int wei) {
        this->na = na;
        this->hei = hei;
        this->wei = wei;
    }
};

// 키 기준 오름차순 정렬
bool cmp(Student a, Student b) {
    return a.hei < b.hei;
}

int main() {
    int n;
    cin >> n;

    Student students[10];

    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight); // 배열에 객체 넣기
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
        cout << students[i].na << " "<<students[i].hei<<" "<<students[i].wei<<endl;

    return 0;
}
