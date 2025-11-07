#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //자릿수
    for(int i=0;i<=5;i++){
        vector<vector<int>> v(10);
        for(int j=0;j<n;j++){
            int digit=(int)(arr[j]/pow(10,i))%10;
            v[digit].push_back(arr[j]);
        }
        vector<int> vv;
        for(int i=0;i<10;i++){
            for(int j=0;j<v[i].size();j++){
                vv.push_back(v[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            
            arr[i]=vv[i];
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

