#include <iostream>
#include <string>

#define MAX_N 10

using namespace std;

class Info{
    public :
        string name;
        string address;
        string region;
    Info(string name, string address, string region)
    : name(name), address(address), region(region){}
    Info(){}
};


Info people[MAX_N];

int n;
string name[MAX_N], address[MAX_N], region[MAX_N];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> address[i] >> region[i];
        people[i] = Info(name[i], address[i],region[i]);
    }
    int last_idx = 0;
    for(int i =1; i< n; i++){
        if(people[i].name > people[last_idx].name) last_idx = i;
    }
    
    cout << "name " << people[last_idx].name << endl;
    cout << "addr " << people[last_idx].address << endl;
    cout << "city " << people[last_idx].region << endl;
    return 0;
}
