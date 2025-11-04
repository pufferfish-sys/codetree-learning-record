#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> list;
    string command;
    int item, index;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push_back") {
            cin >> item;
            list.push_back(item);
        } else if (command == "get") {
            cin >> index;
            if (index >= 1 && index <= list.size()) {
                cout << list[index - 1] << endl;
            }
        } else if (command == "size") {
            cout << list.size() << endl;
        } else if (command == "pop_back") {
            if (!list.empty()) {
                list.pop_back();
            }
        }
    }

    return 0;
}
