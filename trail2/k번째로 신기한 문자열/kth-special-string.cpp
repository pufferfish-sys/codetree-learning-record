#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100], word[100];

bool startwith(string a, string b){
    for(int i = 0; i < (int) b.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;

}

int main() {
    cin >> n >> k >> t;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        if(startwith(str[i],t)) word[cnt++] = str[i];
        }
    sort(word,word+cnt);

    cout << word[k-1];
    
    

    return 0;
}