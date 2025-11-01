#include <iostream>

using namespace std;

int N;
int a[100], b[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    int ans =0;

    for(int x=1;x<=3;x++){// y를 이기는 경우 
    for(int y=1;y<=3;y++){ // z를 이기는 경우
    if(x == y) continue;
    for(int z=1;z<=3;z++){
    int cnt =0;
     if(z == y || z == x) continue;
    for(int i=0;i<N;i++){
    if(a[i]==x && b[i]==y) cnt++;
    else if(a[i]==z && b[i]==x) cnt++;
    else if(a[i]==y && b[i]==z) cnt++;
    }
    ans = max(ans,cnt);
    }
    }

    }
    cout << ans;

    return 0;
}