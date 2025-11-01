#include <iostream>

using namespace std;

int n;
char c[100];
int s[100];
int a = 0 ,b =0;
bool ahonor = false, bhonor=false;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(c[i]=='A') a+=s[i];
        else {b += s[i];}
        if(a>b) {if(ahonor ==false||(ahonor==true && bhonor==true)){
            ahonor = true;
            bhonor = false;
            cnt++;
        } 
        }
        else if(a<b){if(bhonor ==false||(ahonor==true&&bhonor==true)){
            bhonor = true;
            ahonor =false;
            cnt++;
        }

        }
        else{if(!(ahonor==true&&bhonor==true)){
            bhonor = true;
            ahonor = true;
            cnt++;
        }
        }
        
        }   

    
    cout << cnt;

    return 0;
}