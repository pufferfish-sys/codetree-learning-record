#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
using namespace std;

int n;
string word[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }
    sort(word,word+n/*,greater<string>()*/);
    for(int i=0;i<n;i++)
        cout << word[i] << endl;

    return 0;
}