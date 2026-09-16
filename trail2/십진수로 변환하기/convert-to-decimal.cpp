#include <iostream>

using namespace std;

string binary;

int main() {
    cin >> binary;
    
    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * 2 + (binary[i] - '0');
    
    cout << num << '\n';

    return 0;
}