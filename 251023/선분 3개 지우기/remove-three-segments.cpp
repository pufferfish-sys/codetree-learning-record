#include <iostream>

using namespace std;

int n;
int l[10], r[10];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            for(int k=j+1;k<n;k++){
                int arr[100]={0,};
                for(int a=0;a<n;a++){
                    if(a==i||a==j||a==k) continue;
                    for(int p=l[a];p<=r[a];p++){
                        arr[p]++;
                    }
                }
                int ok=1;
                for(int b=0;b<100;b++){
                    if(arr[b]>=2) {ok=0; break;}
                }
                if(ok) cnt++;
            }
        }
    }
   cout <<cnt;

    return 0;
}
