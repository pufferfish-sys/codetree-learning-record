#include <iostream>
#include <string>
using namespace std;
    class Secret{ //생성자
        public:
            // 한줄에 이어서 쓰는거는 자료형 같을때만
            string c;
            char p;
            int t; //멤버변수 선언 - 붕어빵틀 재료 선언
            Secret(string c,char p, int t){ //객체 선언 - 넣을 재료 선언
                this->c=c;
                this->p=p;
                this->t=t;
            }
    };
// 변수 선언 및 입출력은 따로 메인함수에
int main() {
    string code;
    char point;
    int time;

    cin >> code >> point >> time;

    Secret result(code, point, time);

    cout << "secret code : " << result.c << endl;
    cout << "meeting point : " << result.p << endl;
    cout << "time : " << result.t << endl;

    return 0;
}
