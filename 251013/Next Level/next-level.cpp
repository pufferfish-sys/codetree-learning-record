#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;
class level {
    public: string id;
    int lv;

    level(string id,int lv){
        this->id = id;
        this->lv = lv;
    }

};
int main() {
    cin >> user2_id >> user2_level;
    level level1  = level("codetree",10);
    level level2  = level(user2_id,user2_level);
    cout << "user " << level1.id << " lv "<< level1.lv <<endl;
    cout << "user " << level2.id << " lv "<< level2.lv <<endl;
    return 0;
}