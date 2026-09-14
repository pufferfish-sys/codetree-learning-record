#include <iostream>
#include <string>

using namespace std;

class User{
    public:
        string id;
        int level;
        User(string id = "", int level = 0){
            this->id = id;
            this->level = level;
        }

};


string user2_id;
int user2_level;

int main() {

    User user1 = User();

    user1.id = "codetree";
    user1.level = 10;

    cin >> user2_id >> user2_level;
    User user2 = User(user2_id,user2_level); 
    cout << "user" << " " << user1.id << " lv " << user1.level << endl;
    cout << "user" << " " << user2.id << " lv " << user2.level << endl;

    return 0;
}