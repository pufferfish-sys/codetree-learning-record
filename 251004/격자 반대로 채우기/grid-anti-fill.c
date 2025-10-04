#include <stdio.h>

int main() {
    // Please write your code here.
    int n,cnt=1;
    scanf("%d",&n);
    int arr[n][n];
    for(int j=n-1;j>=0;j--){
        if((n-j-1) % 2==0){
        for(int i=n-1;i>=0;i--){
            arr[i][j]=cnt++;
        }
        }
        else{
            for(int i=0;i<n;i++){
                arr[i][j]=cnt++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}