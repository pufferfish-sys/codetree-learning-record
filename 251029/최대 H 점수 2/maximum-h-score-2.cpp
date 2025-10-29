#include <iostream>

using namespace std;

int N, L;
int a[100];

int main() {
    cin >> N >> L;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int ans=0;
    for(int x=0;x<=100;x++){
        int cnt =0;
        int cntl = 0;

        for(int i=0;i<N;i++){
            if(a[i]>=x) cnt++;
            else if(a[i]==x-1){
                if(cntl<L){
                    cntl++;
                    cnt++;
                }

            }
        }

        if(cnt>=x) ans=max(ans,x);

        }

    
    cout << ans;
   

    return 0;
}