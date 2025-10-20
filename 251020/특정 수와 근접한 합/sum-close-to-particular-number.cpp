#include <iostream>

using namespace std;

int N, S;
int arr[100];

int main() {
    int mi=100000;
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i=0;i<N-1;i++){ 
        for(int j=i+1;j<N;j++){
            int sum =0;
            for(int k=0;k<N;k++){
                if(!(k==i||k==j))sum+=arr[k];}
                mi = min(abs(S-sum),mi);
        }

        }
        cout <<mi;
    return 0;
}