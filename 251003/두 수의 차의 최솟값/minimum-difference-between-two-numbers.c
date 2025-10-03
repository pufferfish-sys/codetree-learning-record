#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[10],min=1000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]<min){
                min =arr[j]-arr[i];
            }
        }
    }
    printf("%d",min);
    return 0;
}