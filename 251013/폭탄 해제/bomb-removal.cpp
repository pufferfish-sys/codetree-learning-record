#include <iostream>
#include <string>

using namespace std;

// Bomb 정보를 나타내는 클래스 선언
class Bomb{
    public:
        string unlock_code;
        char linear_color;
        int time;
        Bomb(string unlock_code, char linear_color, int time) {
            this->unlock_code = unlock_code;
            this->linear_color = linear_color;
            this->time = time;
        }
};

int main(){
    // 변수 선언 및 입력
    string u_code;
    char l_color;
    int time;
    cin >> u_code >> l_color >> time;
    
    // Bomb 객체를 만들어 줍니다.
    Bomb b = Bomb(u_code, l_color, time);

    // 결과를 출력합니다.
    cout << "code : " << b.unlock_code << endl;
    cout << "color : " << b.linear_color << endl;
    cout << "second : " << b.time << endl;
    return 0;
}
