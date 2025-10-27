#include <iostream>

using namespace std;

int n;
int adjacent[1000];
int main() {
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> adjacent[i];
    }

    for(int x=1;x<=1000;x++){
        int arr[1001];
        int check[1001]={0,};
        bool flag = true;
        arr[0]= x; 
        check[arr[0]]++; 
        for(int i=1;i<n;i++){
              arr[i] = adjacent[i-1]-arr[i-1];
                if(arr[i] < 1 || arr[i] > n) { flag = false; break; }  
              check[arr[i]]++;
        }
        for(int y=1;y<=n;y++){
            if(check[y]>1) {
                flag = false;
                break;
            }
        }
        if(flag) 
        {for(int z=0;z<n;z++) cout<<arr[z]<<" ";
        break;
        }
    }
    
    

    return 0;
}