#include <iostream>

#define MAX_N 5

using namespace std;

class User {
public:
    char code_name;
    int score;
    User(char code_name,int score)
    : code_name(code_name),score(score){}
    User(){}
};

User users[MAX_N];

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> users[i].code_name >> users[i].score;
    }
    int min_idx = 0;
    for(int i = 0; i< MAX_N; i++){
        if(users[i].score < users[min_idx].score) min_idx = i;
    }
    cout << users[min_idx].code_name << " " << users[min_idx].score;

    return 0;
}
