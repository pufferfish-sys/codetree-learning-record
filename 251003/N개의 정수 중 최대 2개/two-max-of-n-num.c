#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[100],k,max=0,max2=0;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        k=i;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=max2&&arr[i]<max){
            max2=arr[i];
        }
    }

    printf("%d %d",max,max2);
    return 0;
}