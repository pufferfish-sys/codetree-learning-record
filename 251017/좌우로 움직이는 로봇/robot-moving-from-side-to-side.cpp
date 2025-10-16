#include <iostream>
using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];
int a[1000000] = {0};
int b[1000000] = {0};

int main() {
    cin >> n >> m;
    int time=0, time2=0, aspot=0, bspot=0;
    
    for(int i=0;i<n;i++) cin >> t[i] >> d[i];
    for(int i=0;i<m;i++) cin >> t_b[i] >> d_b[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<t[i];j++){
            a[time++] = aspot;
            if(d[i]=='R') aspot++;
            else aspot--;
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<t_b[i];j++){
            b[time2++] = bspot;
            if(d_b[i]=='R') bspot++;
            else bspot--;
        }
    }
    
    int cnt = 0;
    int ti = max(time, time2);
    for(int i=1;i<=ti;i++){
        if(a[i]==b[i] && a[i-1]!=b[i-1]){
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}
