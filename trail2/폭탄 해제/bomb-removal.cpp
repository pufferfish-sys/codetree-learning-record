#include <iostream>
#include <string>

using namespace std;

class Bomb{
    public :
        string u_code;
        char w_color;
        int seconds;
        Bomb(string u_code, char w_color, int seconds)
        : u_code(u_code), w_color(w_color), seconds(seconds){}
        Bomb(){}
}
;


string unlock_code;
char wire_color;
int seconds;



int main() {

    cin >> unlock_code >> wire_color >> seconds;
    Bomb s = Bomb(unlock_code,wire_color,seconds);

    cout << "code : " << s.u_code << endl;
    cout << "color : " << s.w_color << endl;
    cout << "second : " << s.seconds;
    return 0;
}