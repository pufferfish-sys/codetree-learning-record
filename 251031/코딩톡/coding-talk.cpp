#include <iostream>

using namespace std;

int n, m, p;
char c[100];
int u[100];
int check[26]={0,};
int main() {
    cin >> n >> m >> p;

    for (int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }

    for(int i=p-1;i<m;i++){
        int d = c[i]-'A';
        check[d]=1;
    }

    if(u[p-1]==0){
        return 0;
    }
    else{
        int temp=p;
        while(temp > 1 && u[temp-1]==u[temp-2]){
        int d = c[temp-2]-'A';
        check[d]=1;
        temp-=1;
    }
    }

    for(int i=0;i<n;i++){
        char d = 'A'+i;
        if(check[i]!=1) cout << d << " "; 
    }
    
    return 0;
}