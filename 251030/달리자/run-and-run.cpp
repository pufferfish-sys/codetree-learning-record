#include <iostream>
#include <climits>
using namespace std;

int n;
int a[100];
int b[100];
int c[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        c[i] = a[i]-b[i];
    }
    int ans=0;

    for(int i=0; i<n;i++){
        int j = i+1;
        while(j<n){
            if(c[i]>0 && c[j]<0){
                    if(c[j]+c[i]<=0){
                        ans+=(j-i)*c[i];
                        c[j]+=c[i];
                        c[i]=0;
                        break;
                    }
                    else if(c[j]+c[i]>0){
                        c[i]+=c[j];
                        ans+=(j-i)*abs(c[j]);
                        c[j]=0;
                    }
        }
        j++;
        
    }
    }
    cout << ans;
    return 0;
}