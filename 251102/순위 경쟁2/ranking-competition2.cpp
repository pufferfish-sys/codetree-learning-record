#include <iostream>

using namespace std;

int n;
char c[100];
int s[100];
int a = 0 ,b =0;
int status=3;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        if(c[i]=='A') a+=s[i];
        else {b += s[i];}
        if(a>b) {if(status!=1){
            status =1;
            cnt++;
        } 
        }
        else if(a<b){if(status!=2){
            status =2;
            cnt++;
        }

        }
        else{if(status!=3){
            status =3;
            cnt++;
        }
        }
        
        }   

    
    cout << cnt;

    return 0;
}