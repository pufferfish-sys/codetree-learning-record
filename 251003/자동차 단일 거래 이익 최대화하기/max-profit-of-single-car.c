#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[1000],max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]&&(arr[j]-arr[i])>max){
                max=arr[j]-arr[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}